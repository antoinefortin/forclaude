// Copyright Off World Live Limited 2020-2024. All rights reserved.

#pragma once

#include "MovieRenderPipelineDataTypes.h"
#include "OWL360CameraBlenderBase.h"

class OWLMRQPIPELINE_API FOWL360CameraMono180Blender : public FOWL360CameraBlenderBase
{
public:
	FOWL360CameraMono180Blender(TSharedPtr<MoviePipeline::IMoviePipelineOutputMerger> InOutputMerger, const FIntPoint InOutputResolution, const bool bEnableAlpha);

	virtual void ProcessImagePixelData(TUniquePtr<FImagePixelData>&& InData, FOWL360CameraImagePixelDataPayload* InPayload, TSharedPtr<FOWL360CameraOutputFrame> InOutputFrame) override;
};

