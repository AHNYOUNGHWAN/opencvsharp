/*
 * (C) 2008-2014 shimat
 * This code is licenced under the LGPL.
 */

#ifndef _CPP_VIDEO_H_
#define _CPP_VIDEO_H_

#include "include_opencv.h"


CVAPI(void) video_initModule_video()
{
    cv::initModule_video();
}

#pragma region background_segm

// BackgroundSubtractor
CVAPI(void) video_BackgroundSubtractor_getBackgroundImage(cv::BackgroundSubtractor *obj, cv::_OutputArray *backgroundImage)
{
	obj->getBackgroundImage(*backgroundImage);
}
CVAPI(void) video_BackgroundSubtractor_operator(cv::BackgroundSubtractor *obj, cv::_InputArray *image, cv::_OutputArray *fgmask, double learningRate)
{
	(*obj)(*image, *fgmask, learningRate);
}  

CVAPI(void) video_Ptr_BackgroundSubtractor_delete(cv::Ptr<cv::BackgroundSubtractor> *ptr)
{
	delete ptr;
}
CVAPI(cv::BackgroundSubtractor*) video_Ptr_BackgroundSubtractor_obj(cv::Ptr<cv::BackgroundSubtractor> *ptr)
{
    return ptr->obj;
}

CVAPI(cv::AlgorithmInfo*) video_BackgroundSubtractor_info(cv::BackgroundSubtractor *obj)
{
	return obj->info();
}

// BackgroundSubtractorMOG
CVAPI(cv::Ptr<cv::BackgroundSubtractorMOG>*) video_BackgroundSubtractorMOG_new1()
{
	return wrap( new cv::BackgroundSubtractorMOG() );
}
CVAPI(cv::Ptr<cv::BackgroundSubtractorMOG>*) video_BackgroundSubtractorMOG_new2(int history, int nmixtures, double backgroundRatio, double noiseSigma)
{
	return wrap( new cv::BackgroundSubtractorMOG(history, nmixtures, backgroundRatio, noiseSigma) );
}
CVAPI(void) video_BackgroundSubtractorMOG_delete(cv::BackgroundSubtractorMOG *obj)
{
	delete obj;
}
CVAPI(void) video_BackgroundSubtractorMOG_operator(cv::BackgroundSubtractorMOG *obj, cv::_InputArray *image, cv::_OutputArray *fgmask, double learningRate)
{
	(*obj)(*image, *fgmask, learningRate);
}    
CVAPI(void) video_BackgroundSubtractorMOG_initialize(cv::BackgroundSubtractorMOG *obj, CvSize frameSize, int frameType)
{
	obj->initialize(frameSize, frameType);
}

CVAPI(void) video_Ptr_BackgroundSubtractorMOG_delete(cv::Ptr<cv::BackgroundSubtractorMOG> *ptr)
{
	delete ptr;
}
CVAPI(cv::BackgroundSubtractorMOG*) video_Ptr_BackgroundSubtractorMOG_obj(cv::Ptr<cv::BackgroundSubtractorMOG> *ptr)
{
    return ptr->obj;
}

CVAPI(cv::AlgorithmInfo*) video_BackgroundSubtractorMOG_info(cv::BackgroundSubtractorMOG *obj)
{
    return obj->info();
}
	

// BackgroundSubtractorMOG2
CVAPI(cv::Ptr<cv::BackgroundSubtractorMOG2>*) video_BackgroundSubtractorMOG2_new1()
{
	return wrap( new cv::BackgroundSubtractorMOG2());
}
CVAPI(cv::Ptr<cv::BackgroundSubtractorMOG2>*) video_BackgroundSubtractorMOG2_new2(
    int history, float varThreshold, int bShadowDetection)
{
	return wrap( new cv::BackgroundSubtractorMOG2(history, varThreshold, bShadowDetection!=0) );
}
CVAPI(void) video_BackgroundSubtractorMOG2_delete(cv::BackgroundSubtractorMOG2 *obj)
{
	delete obj;
}
CVAPI(void) video_BackgroundSubtractorMOG2_operator(
    cv::BackgroundSubtractorMOG2 *obj, cv::_InputArray *image, cv::_OutputArray *fgmask, double learningRate)
{
	(*obj)(*image, *fgmask, learningRate);
}  
CVAPI(void) video_BackgroundSubtractorMOG2_getBackgroundImage(
    cv::BackgroundSubtractorMOG2 *obj, cv::_OutputArray *backgroundImage)
{
	obj->getBackgroundImage(*backgroundImage);
}
CVAPI(void) video_BackgroundSubtractorMOG2_initialize(
    cv::BackgroundSubtractorMOG2 *obj, CvSize frameSize, int frameType)
{
	obj->initialize(frameSize, frameType);
}

CVAPI(void) video_Ptr_BackgroundSubtractorMOG2_delete(cv::Ptr<cv::BackgroundSubtractorMOG2> *ptr)
{
	delete ptr;
}
CVAPI(cv::BackgroundSubtractorMOG2*) video_Ptr_BackgroundSubtractorMOG2_obj(
    cv::Ptr<cv::BackgroundSubtractorMOG2> *ptr)
{
    return ptr->obj;
}

CVAPI(cv::AlgorithmInfo*) video_BackgroundSubtractorMOG2_info(cv::BackgroundSubtractorMOG2 *obj)
{
    return obj->info();
}


// BackgroundSubtractorGMG
CVAPI(cv::Ptr<cv::BackgroundSubtractorGMG>*) video_BackgroundSubtractorGMG_new()
{
    return wrap( new cv::BackgroundSubtractorGMG() );
}
CVAPI(void) video_BackgroundSubtractorGMG_delete(cv::BackgroundSubtractorGMG *obj)
{
    delete obj;
}
CVAPI(void) video_BackgroundSubtractorGMG_operator(
    cv::BackgroundSubtractorGMG *obj, cv::_InputArray *image, cv::_OutputArray *fgmask, double learningRate)
{
    (*obj)(*image, *fgmask, learningRate);
}
CVAPI(void) video_BackgroundSubtractorGMG_release(cv::BackgroundSubtractorGMG *obj)
{
    obj->release();
}
CVAPI(void) video_BackgroundSubtractorGMG_initialize(
    cv::BackgroundSubtractorGMG *obj, CvSize frameSize, double min, double max)
{
    obj->initialize(frameSize, min, max);
}

CVAPI(void) video_Ptr_BackgroundSubtractorGMG_delete(cv::Ptr<cv::BackgroundSubtractorGMG> *ptr)
{
    delete ptr;
}
CVAPI(cv::BackgroundSubtractorGMG*) video_Ptr_BackgroundSubtractorGMG_obj(
    cv::Ptr<cv::BackgroundSubtractorGMG> *ptr)
{
    return ptr->obj;
}

CVAPI(cv::AlgorithmInfo*) video_BackgroundSubtractorGMG_info(cv::BackgroundSubtractorGMG *obj)
{
    return obj->info();
}


CVAPI(int*) video_BackgroundSubtractorGMG_maxFeatures(cv::BackgroundSubtractorGMG *obj)
{
    return &(obj->maxFeatures);
}
CVAPI(double*) video_BackgroundSubtractorGMG_learningRate(cv::BackgroundSubtractorGMG *obj)
{
    return &(obj->learningRate);
}
CVAPI(int*) video_BackgroundSubtractorGMG_numInitializationFrames(cv::BackgroundSubtractorGMG *obj)
{
    return &(obj->numInitializationFrames);
}
CVAPI(int*) video_BackgroundSubtractorGMG_quantizationLevels(cv::BackgroundSubtractorGMG *obj)
{
    return &(obj->quantizationLevels);
}
CVAPI(double*) video_BackgroundSubtractorGMG_backgroundPrior(cv::BackgroundSubtractorGMG *obj)
{
    return &(obj->backgroundPrior);
}
CVAPI(double*) video_BackgroundSubtractorGMG_decisionThreshold(cv::BackgroundSubtractorGMG *obj)
{
    return &(obj->decisionThreshold);
}
CVAPI(int*) video_BackgroundSubtractorGMG_smoothingRadius(cv::BackgroundSubtractorGMG *obj)
{
    return &(obj->smoothingRadius);
}
CVAPI(int) video_BackgroundSubtractorGMG_updateBackgroundModel_get(cv::BackgroundSubtractorGMG *obj)
{
    return obj->updateBackgroundModel ? 1 : 0;
}
CVAPI(void) video_BackgroundSubtractorGMG_updateBackgroundModel_set(cv::BackgroundSubtractorGMG *obj, int value)
{
    obj->updateBackgroundModel = (value != 0);
}

#pragma endregion

#pragma region tracking


CVAPI(void) video_updateMotionHistory(
    cv::_InputArray *silhouette, cv::_OutputArray *mhi,
    double timestamp, double duration)
{
    cv::updateMotionHistory(*silhouette, *mhi, timestamp, duration);
}

CVAPI(void) video_calcMotionGradient(
    cv::_InputArray *mhi, cv::_OutputArray *mask, cv::_OutputArray *orientation,
    double delta1, double delta2, int apertureSize)
{
    cv::calcMotionGradient(*mhi, *mask, *orientation, delta1, delta2, apertureSize);
}

CVAPI(double) video_calcGlobalOrientation(
    cv::_InputArray *orientation, cv::_InputArray *mask,
    cv::_InputArray *mhi, double timestamp, double duration)
{
    return cv::calcGlobalOrientation(*orientation, *mask, *mhi, timestamp, duration);
}

CVAPI(void) video_segmentMotion(
    cv::_InputArray *mhi, cv::_OutputArray *segmask,
    std::vector<cv::Rect> *boundingRects,
    double timestamp, double segThresh)
{
    cv::segmentMotion(*mhi, *segmask, *boundingRects, timestamp, segThresh);
}

CVAPI(CvBox2D) video_CamShift(
    cv::_InputArray *probImage, CvRect *window, CvTermCriteria criteria)
{
    cv::Rect window0 = *window;
    CvBox2D ret = cv::CamShift(*probImage, window0, criteria);
    *window = window0;
    return ret;
}

CVAPI(int) video_meanShift(
    cv::_InputArray *probImage, CvRect *window, CvTermCriteria criteria)
{
    cv::Rect window0 = *window;
    int ret = cv::meanShift(*probImage, window0, criteria);
    *window = window0;
    return ret;
}


// Kalman filter
CVAPI(cv::KalmanFilter*) video_KalmanFilter_new1()
{
    return new cv::KalmanFilter();
}
CVAPI(cv::KalmanFilter*) video_KalmanFilter_new2(int dynamParams, int measureParams, int controlParams, int type)
{
    return new cv::KalmanFilter(dynamParams, measureParams, controlParams, type);
}
CVAPI(void) video_KalmanFilter_init(cv::KalmanFilter *obj, int dynamParams, int measureParams, int controlParams, int type)
{
    obj->init(dynamParams, measureParams, controlParams, type);
}
CVAPI(void) video_KalmanFilter_delete(cv::KalmanFilter *obj)
{
    delete obj;
}

CVAPI(cv::Mat*) video_KalmanFilter_predict(cv::KalmanFilter *obj, cv::Mat *control)
{
    cv::Mat result = obj->predict(entity(control));
    return new cv::Mat(result);
}
CVAPI(cv::Mat*) video_KalmanFilter_correct(cv::KalmanFilter *obj, cv::Mat *measurement)
{
    cv::Mat result = obj->correct(*measurement);
    return new cv::Mat(result);
}

CVAPI(cv::Mat*) video_KalmanFilter_statePre(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->statePre);
}
CVAPI(cv::Mat*) video_KalmanFilter_statePost(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->statePost);
}
CVAPI(cv::Mat*) video_KalmanFilter_transitionMatrix(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->transitionMatrix);
}
CVAPI(cv::Mat*) video_KalmanFilter_controlMatrix(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->controlMatrix);
}
CVAPI(cv::Mat*) video_KalmanFilter_measurementMatrix(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->measurementMatrix);
}
CVAPI(cv::Mat*) video_KalmanFilter_processNoiseCov(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->processNoiseCov);
}
CVAPI(cv::Mat*) video_KalmanFilter_measurementNoiseCov(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->measurementNoiseCov);
}
CVAPI(cv::Mat*) video_KalmanFilter_errorCovPre(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->errorCovPre);
}
CVAPI(cv::Mat*) video_KalmanFilter_gain(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->gain);
}
CVAPI(cv::Mat*) video_KalmanFilter_errorCovPost(cv::KalmanFilter *obj)
{
    return new cv::Mat(obj->errorCovPost);
}



CVAPI(int) video_buildOpticalFlowPyramid(
    cv::_InputArray *img, cv::_OutputArray *pyramid,
    CvSize winSize, int maxLevel, int withDerivatives,
    int pyrBorder, int derivBorder, int tryReuseInputImage)
{
    return cv::buildOpticalFlowPyramid(
        *img, *pyramid, winSize, maxLevel, withDerivatives != 0,
        pyrBorder, derivBorder, tryReuseInputImage != 0);
}

CVAPI(void) video_calcOpticalFlowPyrLK_InputArray(
    cv::_InputArray *prevImg, cv::_InputArray *nextImg,
    cv::_InputArray *prevPts, cv::_OutputArray *nextPts,
    cv::_OutputArray *status, cv::_OutputArray *err,
    CvSize winSize, int maxLevel, CvTermCriteria criteria,
    int flags, double minEigThreshold)
{
    cv::calcOpticalFlowPyrLK(*prevImg, *nextImg, *prevPts, *nextPts, *status, *err,
        winSize, maxLevel, criteria, flags, minEigThreshold);
}
CVAPI(void) video_calcOpticalFlowPyrLK_vector(
    cv::_InputArray *prevImg, cv::_InputArray *nextImg,
    cv::Point2f *prevPts, int prevPtsSize,
    std::vector<cv::Point2f> *nextPts,
    std::vector<uchar> *status,
    std::vector<float> *err,
    CvSize winSize, int maxLevel, CvTermCriteria criteria,
    int flags, double minEigThreshold)
{
    std::vector<cv::Point2f> prevPtsVec(prevPts, prevPts + prevPtsSize);
    cv::calcOpticalFlowPyrLK(*prevImg, *nextImg, prevPtsVec, *nextPts, 
        *status, *err, winSize, maxLevel, criteria, flags, minEigThreshold);
}

CVAPI(void) video_calcOpticalFlowFarneback(
    cv::_InputArray *prev, cv::_InputArray *next,
    cv::_OutputArray *flow, double pyrScale, int levels, int winSize,
    int iterations, int polyN, double polySigma, int flags)
{
    cv::calcOpticalFlowFarneback(*prev, *next, *flow, pyrScale, levels, winSize,
        iterations, polyN, polySigma, flags);
}

CVAPI(cv::Mat*) video_estimateRigidTransform(
    cv::_InputArray *src, cv::_InputArray *dst, int fullAffine)
{
    cv::Mat ret = cv::estimateRigidTransform(*src, *dst, fullAffine != 0);
    return new cv::Mat(ret);
}

CVAPI(void) video_calcOpticalFlowSF1(
    cv::Mat *from,
    cv::Mat *to,
    cv::Mat *flow,
    int layers,
    int averagingBlockSize,
    int maxFlow)
{
    cv::calcOpticalFlowSF(*from, *to, *flow, layers, averagingBlockSize, maxFlow);
}

CVAPI(void) video_calcOpticalFlowSF2(
    cv::Mat *from,
    cv::Mat *to,
    cv::Mat *flow,
    int layers,
    int averagingBlockSize,
    int maxFlow,
    double sigmaDist,
    double sigmaColor,
    int postprocessWindow,
    double sigmaDistFix,
    double sigmaColorFix,
    double occThr,
    int upscaleAveragingRadius,
    double upscaleSigmaDist,
    double upscaleSigmaColor,
    double speedUpThr)
{
    cv::calcOpticalFlowSF(*from, *to, *flow, layers, averagingBlockSize, maxFlow,
        sigmaDist, sigmaColor, postprocessWindow, sigmaDistFix, sigmaColorFix,
        occThr, upscaleAveragingRadius, upscaleSigmaDist, upscaleSigmaColor, speedUpThr);
}


CVAPI(void) video_DenseOpticalFlow_calc(
    cv::DenseOpticalFlow *obj,
    cv::_InputArray *i0, cv::_InputArray *i1, cv::_OutputArray *flow)
{
    obj->calc(*i0, *i1, *flow);
}
CVAPI(void) video_DenseOpticalFlow_collectGarbage(cv::DenseOpticalFlow *obj)
{
    obj->collectGarbage();
}
CVAPI(cv::AlgorithmInfo*) video_DenseOpticalFlow_info(cv::DenseOpticalFlow *obj)
{
    return obj->info();
}

CVAPI(cv::Ptr<cv::DenseOpticalFlow>*) video_createOptFlow_DualTVL1()
{
    return clone( cv::createOptFlow_DualTVL1() );
}

CVAPI(cv::DenseOpticalFlow*) video_Ptr_DenseOpticalFlow_obj(cv::Ptr<cv::DenseOpticalFlow> *ptr)
{
    return ptr->obj;
}
CVAPI(void) video_Ptr_DenseOpticalFlow_delete(cv::Ptr<cv::DenseOpticalFlow> *ptr)
{
    delete ptr;
}

#pragma endregion

#endif