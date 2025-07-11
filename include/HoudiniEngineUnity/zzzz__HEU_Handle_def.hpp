#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Handle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_Handle)
namespace HoudiniEngineUnity {
struct HAPI_HandleInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
namespace HoudiniEngineUnity {
struct HAPI_TransformEuler;
}
namespace HoudiniEngineUnity {
struct HAPI_XYZOrder;
}
namespace HoudiniEngineUnity {
class HEU_HandleParamBinding;
}
namespace HoudiniEngineUnity {
struct HEU_Handle_HEU_HandleType;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_Handle_HEU_HandleType;
}
namespace HoudiniEngineUnity {
class HEU_Handle;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_Handle_HEU_HandleType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Handle);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_Handle/HEU_HandleType
struct CORDL_TYPE HEU_Handle_HEU_HandleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_Handle_HEU_HandleType_Unwrapped
  enum struct __HEU_Handle_HEU_HandleType_Unwrapped : int32_t {
    __E_XFORM = static_cast<int32_t>(0x0),
    __E_UNSUPPORTED = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_Handle_HEU_HandleType_Unwrapped() const noexcept {
    return static_cast<__HEU_Handle_HEU_HandleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Handle_HEU_HandleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_Handle_HEU_HandleType(int32_t value__) noexcept;

  /// @brief Field UNSUPPORTED value: I32(1)
  static ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType const UNSUPPORTED;

  /// @brief Field XFORM value: I32(0)
  static ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType const XFORM;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11668 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle_HEU_HandleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Handle_HEU_HandleType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HAPI_RSTOrder, HoudiniEngineUnity.HAPI_TransformEuler, HoudiniEngineUnity.HAPI_XYZOrder, HoudiniEngineUnity.HEU_Handle::HEU_HandleType,
// HoudiniEngineUnity.IEquivable`1<T>, UnityEngine.Quaternion, UnityEngine.ScriptableObject, UnityEngine.Vector3
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_Handle
class CORDL_TYPE HEU_Handle : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using HEU_HandleType = ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType;

  __declspec(property(get = get_ConvertedTransformEuler)) ::HoudiniEngineUnity::HAPI_TransformEuler ConvertedTransformEuler;

  __declspec(property(get = get_HandleName)) ::StringW HandleName;

  __declspec(property(get = get_HandlePosition)) ::UnityEngine::Vector3 HandlePosition;

  __declspec(property(get = get_HandleRotation)) ::UnityEngine::Quaternion HandleRotation;

  __declspec(property(get = get_HandleScale)) ::UnityEngine::Vector3 HandleScale;

  __declspec(property(get = get_HandleType)) ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType HandleType;

  __declspec(property(get = get_RSTOrder)) ::HoudiniEngineUnity::HAPI_RSTOrder RSTOrder;

  __declspec(property(get = get_XYZOrder)) ::HoudiniEngineUnity::HAPI_XYZOrder XYZOrder;

  /// @brief Field _convertedTransformEuler, offset 0x70, size 0x28
  __declspec(property(get = __cordl_internal_get__convertedTransformEuler, put = __cordl_internal_set__convertedTransformEuler)) ::HoudiniEngineUnity::HAPI_TransformEuler _convertedTransformEuler;

  /// @brief Field _handleIndex, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__handleIndex, put = __cordl_internal_set__handleIndex)) int32_t _handleIndex;

  /// @brief Field _handleName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__handleName, put = __cordl_internal_set__handleName)) ::StringW _handleName;

  /// @brief Field _handleParamRotateBinding, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__handleParamRotateBinding,
                      put = __cordl_internal_set__handleParamRotateBinding)) ::HoudiniEngineUnity::HEU_HandleParamBinding* _handleParamRotateBinding;

  /// @brief Field _handleParamScaleBinding, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__handleParamScaleBinding, put = __cordl_internal_set__handleParamScaleBinding)) ::HoudiniEngineUnity::HEU_HandleParamBinding* _handleParamScaleBinding;

  /// @brief Field _handleParamTranslateBinding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__handleParamTranslateBinding,
                      put = __cordl_internal_set__handleParamTranslateBinding)) ::HoudiniEngineUnity::HEU_HandleParamBinding* _handleParamTranslateBinding;

  /// @brief Field _handlePosition, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get__handlePosition, put = __cordl_internal_set__handlePosition)) ::UnityEngine::Vector3 _handlePosition;

  /// @brief Field _handleRotation, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get__handleRotation, put = __cordl_internal_set__handleRotation)) ::UnityEngine::Quaternion _handleRotation;

  /// @brief Field _handleScale, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get__handleScale, put = __cordl_internal_set__handleScale)) ::UnityEngine::Vector3 _handleScale;

  /// @brief Field _handleType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__handleType, put = __cordl_internal_set__handleType)) ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType _handleType;

  /// @brief Field _rstOrder, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__rstOrder, put = __cordl_internal_set__rstOrder)) ::HoudiniEngineUnity::HAPI_RSTOrder _rstOrder;

  /// @brief Field _xyzOrder, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__xyzOrder, put = __cordl_internal_set__xyzOrder)) ::HoudiniEngineUnity::HAPI_XYZOrder _xyzOrder;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>*() noexcept;

  /// @brief Method CleanUp, addr 0x3a47420, size 0xc, virtual false, abstract: false, final false
  inline void CleanUp();

  /// @brief Method GenerateTransform, addr 0x3a46f34, size 0x4ec, virtual false, abstract: false, final false
  inline void GenerateTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_Parameters* parameters);

  /// @brief Method GetRotateBinding, addr 0x3a464f8, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_HandleParamBinding* GetRotateBinding();

  /// @brief Method GetScaleBinding, addr 0x3a46500, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_HandleParamBinding* GetScaleBinding();

  /// @brief Method GetTranslateBinding, addr 0x3a464f0, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_HandleParamBinding* GetTranslateBinding();

  /// @brief Method GetUpdatedPosition, addr 0x3a47450, size 0x15c, virtual false, abstract: false, final false
  inline bool GetUpdatedPosition(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::ByRef<::UnityEngine::Vector3> inPosition);

  /// @brief Method GetUpdatedRotation, addr 0x3a475ac, size 0x1fc, virtual false, abstract: false, final false
  inline bool GetUpdatedRotation(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::ByRef<::UnityEngine::Quaternion> inRotation);

  /// @brief Method HasRotateHandle, addr 0x3a46470, size 0x10, virtual false, abstract: false, final false
  inline bool HasRotateHandle();

  /// @brief Method HasScaleHandle, addr 0x3a46480, size 0x10, virtual false, abstract: false, final false
  inline bool HasScaleHandle();

  /// @brief Method HasTranslateHandle, addr 0x3a46460, size 0x10, virtual false, abstract: false, final false
  inline bool HasTranslateHandle();

  /// @brief Method IsEquivalentTo, addr 0x3a477a8, size 0x4e4, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_Handle* other);

  /// @brief Method IsRotateHandleDisabled, addr 0x3a464b0, size 0x20, virtual false, abstract: false, final false
  inline bool IsRotateHandleDisabled();

  /// @brief Method IsScaleHandleDisabled, addr 0x3a464d0, size 0x20, virtual false, abstract: false, final false
  inline bool IsScaleHandleDisabled();

  /// @brief Method IsSpecialRSTOrder, addr 0x3a4742c, size 0x24, virtual false, abstract: false, final false
  static inline bool IsSpecialRSTOrder(::HoudiniEngineUnity::HAPI_RSTOrder rstOrder);

  /// @brief Method IsTranslateHandleDisabled, addr 0x3a46490, size 0x20, virtual false, abstract: false, final false
  inline bool IsTranslateHandleDisabled();

  static inline ::HoudiniEngineUnity::HEU_Handle* New_ctor();

  /// @brief Method SetupHandle, addr 0x3a4652c, size 0x7cc, virtual false, abstract: false, final false
  inline bool SetupHandle(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, int32_t handleIndex, ::StringW handleName, ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType handleType,
                          ::ByRef<::HoudiniEngineUnity::HAPI_HandleInfo> handleInfo, ::HoudiniEngineUnity::HEU_Parameters* parameters);

  constexpr ::HoudiniEngineUnity::HAPI_TransformEuler const& __cordl_internal_get__convertedTransformEuler() const;

  constexpr ::HoudiniEngineUnity::HAPI_TransformEuler& __cordl_internal_get__convertedTransformEuler();

  constexpr int32_t const& __cordl_internal_get__handleIndex() const;

  constexpr int32_t& __cordl_internal_get__handleIndex();

  constexpr ::StringW const& __cordl_internal_get__handleName() const;

  constexpr ::StringW& __cordl_internal_get__handleName();

  constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding* const& __cordl_internal_get__handleParamRotateBinding() const;

  constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding*& __cordl_internal_get__handleParamRotateBinding();

  constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding* const& __cordl_internal_get__handleParamScaleBinding() const;

  constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding*& __cordl_internal_get__handleParamScaleBinding();

  constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding* const& __cordl_internal_get__handleParamTranslateBinding() const;

  constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding*& __cordl_internal_get__handleParamTranslateBinding();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__handlePosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__handlePosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__handleRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__handleRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__handleScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__handleScale();

  constexpr ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType const& __cordl_internal_get__handleType() const;

  constexpr ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType& __cordl_internal_get__handleType();

  constexpr ::HoudiniEngineUnity::HAPI_RSTOrder const& __cordl_internal_get__rstOrder() const;

  constexpr ::HoudiniEngineUnity::HAPI_RSTOrder& __cordl_internal_get__rstOrder();

  constexpr ::HoudiniEngineUnity::HAPI_XYZOrder const& __cordl_internal_get__xyzOrder() const;

  constexpr ::HoudiniEngineUnity::HAPI_XYZOrder& __cordl_internal_get__xyzOrder();

  constexpr void __cordl_internal_set__convertedTransformEuler(::HoudiniEngineUnity::HAPI_TransformEuler value);

  constexpr void __cordl_internal_set__handleIndex(int32_t value);

  constexpr void __cordl_internal_set__handleName(::StringW value);

  constexpr void __cordl_internal_set__handleParamRotateBinding(::HoudiniEngineUnity::HEU_HandleParamBinding* value);

  constexpr void __cordl_internal_set__handleParamScaleBinding(::HoudiniEngineUnity::HEU_HandleParamBinding* value);

  constexpr void __cordl_internal_set__handleParamTranslateBinding(::HoudiniEngineUnity::HEU_HandleParamBinding* value);

  constexpr void __cordl_internal_set__handlePosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__handleRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__handleScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__handleType(::HoudiniEngineUnity::HEU_Handle_HEU_HandleType value);

  constexpr void __cordl_internal_set__rstOrder(::HoudiniEngineUnity::HAPI_RSTOrder value);

  constexpr void __cordl_internal_set__xyzOrder(::HoudiniEngineUnity::HAPI_XYZOrder value);

  /// @brief Method .ctor, addr 0x3a47c8c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConvertedTransformEuler, addr 0x3a4644c, size 0x14, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HAPI_TransformEuler get_ConvertedTransformEuler();

  /// @brief Method get_HandleName, addr 0x3a4642c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HandleName();

  /// @brief Method get_HandlePosition, addr 0x3a46508, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_HandlePosition();

  /// @brief Method get_HandleRotation, addr 0x3a46514, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_HandleRotation();

  /// @brief Method get_HandleScale, addr 0x3a46520, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_HandleScale();

  /// @brief Method get_HandleType, addr 0x3a46434, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType get_HandleType();

  /// @brief Method get_RSTOrder, addr 0x3a4643c, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HAPI_RSTOrder get_RSTOrder();

  /// @brief Method get_XYZOrder, addr 0x3a46444, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HAPI_XYZOrder get_XYZOrder();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_Handle__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Handle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Handle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Handle(HEU_Handle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Handle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Handle(HEU_Handle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11669 };

  /// @brief Field _handleName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____handleName;

  /// @brief Field _handleType, offset: 0x20, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_Handle_HEU_HandleType ____handleType;

  /// @brief Field _handleIndex, offset: 0x24, size: 0x4, def value: None
  int32_t ____handleIndex;

  /// @brief Field _handleParamTranslateBinding, offset: 0x28, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_HandleParamBinding* ____handleParamTranslateBinding;

  /// @brief Field _handleParamRotateBinding, offset: 0x30, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_HandleParamBinding* ____handleParamRotateBinding;

  /// @brief Field _handleParamScaleBinding, offset: 0x38, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_HandleParamBinding* ____handleParamScaleBinding;

  /// @brief Field _handlePosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____handlePosition;

  /// @brief Field _handleRotation, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____handleRotation;

  /// @brief Field _handleScale, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____handleScale;

  /// @brief Field _rstOrder, offset: 0x68, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_RSTOrder ____rstOrder;

  /// @brief Field _xyzOrder, offset: 0x6c, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_XYZOrder ____xyzOrder;

  /// @brief Field _convertedTransformEuler, offset: 0x70, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_TransformEuler ____convertedTransformEuler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____handleName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____handleType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____handleIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____handleParamTranslateBinding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____handleParamRotateBinding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____handleParamScaleBinding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____handlePosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____handleRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____handleScale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____rstOrder) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____xyzOrder) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Handle, ____convertedTransformEuler) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Handle, 0x98>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Handle_HEU_HandleType, "HoudiniEngineUnity", "HEU_Handle/HEU_HandleType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Handle);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Handle*, "HoudiniEngineUnity", "HEU_Handle");
