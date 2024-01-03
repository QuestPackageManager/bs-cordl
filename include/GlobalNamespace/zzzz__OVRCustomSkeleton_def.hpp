#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCustomSkeleton)
namespace GlobalNamespace {
struct __OVRSkeleton__BoneId;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonType;
}
namespace GlobalNamespace {
struct __OVRCustomSkeleton__RetargetingType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRCustomSkeleton__RetargetingType;
}
namespace GlobalNamespace {
class OVRCustomSkeleton;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRCustomSkeleton__RetargetingType);
MARK_REF_PTR_T(::GlobalNamespace::OVRCustomSkeleton);
// Type: ::RetargetingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8090))
// CS Name: ::OVRCustomSkeleton::RetargetingType
struct CORDL_TYPE __OVRCustomSkeleton__RetargetingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRCustomSkeleton__RetargetingType_Unwrapped
  enum struct ____OVRCustomSkeleton__RetargetingType_Unwrapped : int32_t {
    __E_OculusSkeleton = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRCustomSkeleton__RetargetingType_Unwrapped() const noexcept {
    return static_cast<____OVRCustomSkeleton__RetargetingType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRCustomSkeleton__RetargetingType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRCustomSkeleton__RetargetingType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OculusSkeleton value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType const OculusSkeleton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRCustomSkeleton__RetargetingType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRCustomSkeleton__RetargetingType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRCustomSkeleton
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 196, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8090)), TypeDefinitionIndex(TypeDefinitionIndex(8170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8091))
// CS Name: ::OVRCustomSkeleton*
class CORDL_TYPE OVRCustomSkeleton : public ::GlobalNamespace::OVRSkeleton {
public:
  // Declarations
  using RetargetingType = ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType;

  /// @brief Field _customBones_V2, offset 0xb8, size 0x8
  __declspec(property(get = __get__customBones_V2, put = __set__customBones_V2))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _customBones_V2;

  /// @brief Field retargetingType, offset 0xc0, size 0x4
  __declspec(property(get = __get_retargetingType, put = __set_retargetingType))::GlobalNamespace::__OVRCustomSkeleton__RetargetingType retargetingType;

  __declspec(property(get = get_CustomBones))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CustomBones;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& __get__customBones_V2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const& __get__customBones_V2() const;

  constexpr void __set__customBones_V2(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value);

  constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType& __get_retargetingType();

  constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType const& __get_retargetingType() const;

  constexpr void __set_retargetingType(::GlobalNamespace::__OVRCustomSkeleton__RetargetingType value);

  /// @brief Method get_CustomBones, addr 0x27aa0a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_CustomBones();

  /// @brief Method GetBoneTransform, addr 0x27aa0b0, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::Transform* GetBoneTransform(::GlobalNamespace::__OVRSkeleton__BoneId boneId);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x27aa108, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x27aa10c, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method AllocateBones, addr 0x27aa110, size 0xc8, virtual false, abstract: false, final false
  inline void AllocateBones();

  /// @brief Method SetSkeletonType, addr 0x27aa1d8, size 0x88, virtual true, abstract: false, final false
  inline void SetSkeletonType(::GlobalNamespace::__OVRSkeleton__SkeletonType skeletonType);

  static inline ::GlobalNamespace::OVRCustomSkeleton* New_ctor();

  /// @brief Method .ctor, addr 0x27aa260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRCustomSkeleton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCustomSkeleton(OVRCustomSkeleton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCustomSkeleton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCustomSkeleton(OVRCustomSkeleton const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCustomSkeleton();

public:
  /// @brief Field _customBones_V2, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ____customBones_V2;

  /// @brief Field retargetingType, offset: 0xc0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType ___retargetingType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCustomSkeleton, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomSkeleton, ____customBones_V2) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomSkeleton, ___retargetingType) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRCustomSkeleton__RetargetingType, "", "OVRCustomSkeleton/RetargetingType");
NEED_NO_BOX(::GlobalNamespace::OVRCustomSkeleton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomSkeleton*, "", "OVRCustomSkeleton");
