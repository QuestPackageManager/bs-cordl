#pragma once
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__IReorderable_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>"
constexpr UnityEngine::UIElements::ICollectionDragAndDropController::operator ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*() noexcept {
  return static_cast<::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IReorderable"
constexpr UnityEngine::UIElements::ICollectionDragAndDropController::operator ::UnityEngine::UIElements::IReorderable*() noexcept {
  return static_cast<::UnityEngine::UIElements::IReorderable*>(static_cast<void*>(this));
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
