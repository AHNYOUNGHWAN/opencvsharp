﻿/*
 * (C) 2008-2014 shimat
 * This code is licenced under the LGPL.
 */

using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

#pragma warning disable 1591

namespace OpenCvSharp.CPlusPlus
{
    // ReSharper disable InconsistentNaming

    static partial class CppInvoke
    {
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_Rodrigues(IntPtr src, IntPtr dst, IntPtr jacobian);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_Rodrigues_VecToMat(IntPtr vector, IntPtr matrix, IntPtr jacobian);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_Rodrigues_MatToVec(IntPtr vector, IntPtr matrix, IntPtr jacobian);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr calib3d_findHomography_InputArray(IntPtr srcPoints, IntPtr dstPoints,
            int method, double ransacReprojThreshold, IntPtr mask);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr calib3d_findHomography_vector(Point2d[] srcPoints, int srcPointsLength,
            Point2d[] dstPoints, int dstPointsLength, int method, double ransacReprojThreshold, IntPtr mask);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_RQDecomp3x3_InputArray(IntPtr src, IntPtr mtxR,
            IntPtr mtxQ, IntPtr qx, IntPtr qy, IntPtr qz, out Vec3d outVal);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_RQDecomp3x3_Mat(IntPtr src, IntPtr mtxR, IntPtr mtxQ,
            IntPtr qx, IntPtr qy, IntPtr qz, out Vec3d outVal);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_decomposeProjectionMatrix_InputArray(IntPtr projMatrix,
            IntPtr cameraMatrix, IntPtr rotMatrix, IntPtr transVect, IntPtr rotMatrixX,
            IntPtr rotMatrixY, IntPtr rotMatrixZ, IntPtr eulerAngles);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_decomposeProjectionMatrix_Mat(IntPtr projMatrix,
            IntPtr cameraMatrix, IntPtr rotMatrix, IntPtr transVect, IntPtr rotMatrixX,
            IntPtr rotMatrixY, IntPtr rotMatrixZ, IntPtr eulerAngles);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_matMulDeriv(IntPtr a, IntPtr b,
                                                      IntPtr dABdA, IntPtr dABdB);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_composeRT_InputArray(IntPtr rvec1, IntPtr tvec1,
                                                               IntPtr rvec2, IntPtr tvec2,
                                                               IntPtr rvec3, IntPtr tvec3,
                                                               IntPtr dr3dr1, IntPtr dr3dt1,
                                                               IntPtr dr3dr2, IntPtr dr3dt2,
                                                               IntPtr dt3dr1, IntPtr dt3dt1,
                                                               IntPtr dt3dr2, IntPtr dt3dt2);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_composeRT_Mat(IntPtr rvec1, IntPtr tvec1,
                                                        IntPtr rvec2, IntPtr tvec2,
                                                        IntPtr rvec3, IntPtr tvec3,
                                                        IntPtr dr3dr1, IntPtr dr3dt1,
                                                        IntPtr dr3dr2, IntPtr dr3dt2,
                                                        IntPtr dt3dr1, IntPtr dt3dt1,
                                                        IntPtr dt3dr2, IntPtr dt3dt2);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_projectPoints_InputArray(IntPtr objectPoints,
                                                                   IntPtr rvec, IntPtr tvec,
                                                                   IntPtr cameraMatrix, IntPtr distCoeffs,
                                                                   IntPtr imagePoints, IntPtr jacobian,
                                                                   double aspectRatio);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_projectPoints_Mat(IntPtr objectPoints,
                                                            IntPtr rvec, IntPtr tvec,
                                                            IntPtr cameraMatrix, IntPtr distCoeffs,
                                                            IntPtr imagePoints, IntPtr jacobian,
                                                            double aspectRatio);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_solvePnP_InputArray(IntPtr selfectPoints, IntPtr imagePoints, IntPtr cameraMatrix, 
            IntPtr distCoeffs, IntPtr rvec, IntPtr tvec, int useExtrinsicGuess, int flags);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_solvePnP_vector(Point3f[] objectPoints, int objectPointsLength,
                                                          Point2f[] imagePoints, int imagePointsLength,
                                                          double[,] cameraMatrix, double[] distCoeffs, int distCoeffsLength,
                                                          [Out] double[] rvec, [Out] double[] tvec, int useExtrinsicGuess, int flags);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_solvePnPRansac_InputArray(IntPtr objectPoints, IntPtr imagePoints,
            IntPtr cameraMatrix, IntPtr distCoeffs, IntPtr rvec, IntPtr tvec,
            int useExtrinsicGuess, int iterationsCount, float reprojectionError, int minInliersCount,
            IntPtr inliers, int flags);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_solvePnPRansac_vector(Point3f[] objectPoints, int objectPointsLength,
            Point2f[] imagePoints, int imagePointsLength, double[,] cameraMatrix, double[] distCoeffs, int distCoeffsLength,
            [Out] double[] rvec, [Out] double[] tvec, int useExtrinsicGuess, int iterationsCount, float reprojectionError, 
            int minInliersCount, IntPtr inliers, int flags);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr calib3d_initCameraMatrix2D_Mat(IntPtr[] objectPoints, int objectPointsLength,
            IntPtr[] imagePoints, int imagePointsLength,
            CvSize imageSize, double aspectRatio);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr calib3d_initCameraMatrix2D_array(IntPtr[] objectPoints, int opSize1, int[] opSize2,
            IntPtr[] imagePoints, int ipSize1, int[] ipSize2,
            CvSize imageSize, double aspectRatio);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_findChessboardCorners_InputArray(IntPtr image, CvSize patternSize,
            IntPtr corners, int flags);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_findChessboardCorners_vector(IntPtr image, CvSize patternSize,
            IntPtr corners, int flags);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_find4QuadCornerSubpix_InputArray(IntPtr img, IntPtr corners, CvSize regionSize);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_find4QuadCornerSubpix_vector(IntPtr img, IntPtr corners, CvSize regionSize);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_drawChessboardCorners_InputArray(IntPtr image, CvSize patternSize,
            IntPtr corners, int patternWasFound);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_drawChessboardCorners_array(IntPtr image, CvSize patternSize,
            Point2f[] corners, int cornersLength, int patternWasFound);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_findCirclesGrid_InputArray(IntPtr image, CvSize patternSize,
            IntPtr centers, int flags, IntPtr blobDetector);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_findCirclesGrid_vector(IntPtr image, CvSize patternSize,
            IntPtr centers, int flags, IntPtr blobDetector);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern double calib3d_calibrateCamera_InputArray(
            IntPtr[] objectPoints, int objectPointsSize,
            IntPtr[] imagePoints, int imagePointsSize,
            CvSize imageSize,
            IntPtr cameraMatrix,IntPtr distCoeffs,
            IntPtr rvecs, IntPtr tvecs,
            int flags, CvTermCriteria criteria);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern double calib3d_calibrateCamera_vector(
            IntPtr[] objectPoints, int opSize1, int[] opSize2,
            IntPtr[] imagePoints, int ipSize1, int[] ipSize2,
            CvSize imageSize,
            [In, Out] double[,] cameraMatrix,
            [In, Out] double[] distCoeffs, int distCoeffsSize,
            IntPtr rvecs, IntPtr tvecs,
            int flags, CvTermCriteria criteria);


        // StereoBM
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr calib3d_StereoBM_new1();
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr calib3d_StereoBM_new2(int preset, int ndisparities,
                                                          int sadWindowSize);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoBM_init(IntPtr obj, int preset, int ndisparities,
                                                        int sadWindowSize);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoBM_delete(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoBM_compute(IntPtr obj, IntPtr left,
                                                           IntPtr right,
                                                           IntPtr disp, int disptype);

        // StereoSGBM
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr calib3d_StereoSGBM_new1();
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr calib3d_StereoSGBM_new2(int minDisparity, int numDisparities, int SADWindowSize, int P1, int P2, int disp12MaxDiff, int preFilterCap, int uniquenessRatio, int speckleWindowSize, int speckleRange, [MarshalAs(UnmanagedType.Bool)] bool fullDP);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_delete(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_compute(IntPtr obj, IntPtr left, IntPtr right, IntPtr disp);

        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_minDisparity_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_minDisparity_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_numberOfDisparities_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_numberOfDisparities_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_SADWindowSize_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_SADWindowSize_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_preFilterCap_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_preFilterCap_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_uniquenessRatio_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_uniquenessRatio_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_P1_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_P1_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_P2_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_P2_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_speckleWindowSize_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_speckleWindowSize_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_speckleRange_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_speckleRange_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_disp12MaxDiff_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_disp12MaxDiff_set(IntPtr obj, int value);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern int calib3d_StereoSGBM_fullDP_get(IntPtr obj);
        [DllImport(DllExtern, CallingConvention = CallingConvention.Cdecl)]
        public static extern void calib3d_StereoSGBM_fullDP_set(IntPtr obj, int value);

    }
}