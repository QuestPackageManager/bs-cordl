#pragma once
// IWYU pragma private; include "GlobalNamespace/SpectrogramRowPropertyAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpectrogramRowPropertyAnimator)
namespace GlobalNamespace {
class BasicSpectrogramData;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class SpectrogramRowPropertyAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpectrogramRowPropertyAnimator);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpectrogramRowPropertyAnimator
class CORDL_TYPE SpectrogramRowPropertyAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animationCurve, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__animationCurve, put = __cordl_internal_set__animationCurve)) ::UnityEngine::AnimationCurve* _animationCurve;

  /// @brief Field _dataIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__dataIndex, put = __cordl_internal_set__dataIndex)) int32_t _dataIndex;

  /// @brief Field _isInitialized, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _materialPropertyBlockController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field _multiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplier, put = __cordl_internal_set__multiplier)) float_t _multiplier;

  /// @brief Field _propertyName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName)) ::StringW _propertyName;

  /// @brief Field _spectrogramData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__spectrogramData, put = __cordl_internal_set__spectrogramData)) ::UnityW<::GlobalNamespace::BasicSpectrogramData> _spectrogramData;

  /// @brief Field _spectrogramValue, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__spectrogramValue, put = __cordl_internal_set__spectrogramValue)) float_t _spectrogramValue;

  /// @brief Field propertyId, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_propertyId, put = __cordl_internal_set_propertyId)) int32_t propertyId;

  /// @brief Method Awake, addr 0x3b9f4e4, size 0x90, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LazyInit, addr 0x3b9f574, size 0x30, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::GlobalNamespace::SpectrogramRowPropertyAnimator* New_ctor();

  /// @brief Method SetMultiplier, addr 0x3b9f648, size 0x8, virtual false, abstract: false, final false
  inline void SetMultiplier(float_t value);

  /// @brief Method SetProperty, addr 0x3b9f4b0, size 0x34, virtual true, abstract: false, final false
  inline void SetProperty();

  /// @brief Method Update, addr 0x3b9f5a4, size 0xa4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animationCurve();

  constexpr int32_t const& __cordl_internal_get__dataIndex() const;

  constexpr int32_t& __cordl_internal_get__dataIndex();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr float_t const& __cordl_internal_get__multiplier() const;

  constexpr float_t& __cordl_internal_get__multiplier();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData> const& __cordl_internal_get__spectrogramData() const;

  constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData>& __cordl_internal_get__spectrogramData();

  constexpr float_t const& __cordl_internal_get__spectrogramValue() const;

  constexpr float_t& __cordl_internal_get__spectrogramValue();

  constexpr int32_t const& __cordl_internal_get_propertyId() const;

  constexpr int32_t& __cordl_internal_get_propertyId();

  constexpr void __cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__dataIndex(int32_t value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__multiplier(float_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  constexpr void __cordl_internal_set__spectrogramData(::UnityW<::GlobalNamespace::BasicSpectrogramData> value);

  constexpr void __cordl_internal_set__spectrogramValue(float_t value);

  constexpr void __cordl_internal_set_propertyId(int32_t value);

  /// @brief Method .ctor, addr 0x3b9f650, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpectrogramRowPropertyAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpectrogramRowPropertyAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpectrogramRowPropertyAnimator(SpectrogramRowPropertyAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpectrogramRowPropertyAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpectrogramRowPropertyAnimator(SpectrogramRowPropertyAnimator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4377 };

  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _dataIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ____dataIndex;

  /// @brief Field _propertyName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _multiplier, offset: 0x38, size: 0x4, def value: None
  float_t ____multiplier;

  /// @brief Field _animationCurve, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____animationCurve;

  /// @brief Field propertyId, offset: 0x48, size: 0x4, def value: None
  int32_t ___propertyId;

  /// @brief Field _isInitialized, offset: 0x4c, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _spectrogramValue, offset: 0x50, size: 0x4, def value: None
  float_t ____spectrogramValue;

  /// @brief Field _spectrogramData, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BasicSpectrogramData> ____spectrogramData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpectrogramRowPropertyAnimator, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRowPropertyAnimator, ____dataIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRowPropertyAnimator, ____propertyName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRowPropertyAnimator, ____multiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRowPropertyAnimator, ____animationCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRowPropertyAnimator, ___propertyId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRowPropertyAnimator, ____isInitialized) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRowPropertyAnimator, ____spectrogramValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRowPropertyAnimator, ____spectrogramData) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpectrogramRowPropertyAnimator, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpectrogramRowPropertyAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpectrogramRowPropertyAnimator*, "", "SpectrogramRowPropertyAnimator");
