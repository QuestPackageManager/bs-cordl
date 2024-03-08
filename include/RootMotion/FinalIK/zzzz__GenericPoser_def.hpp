#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Poser_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GenericPoser)
namespace RootMotion::FinalIK {
class __GenericPoser__Map;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GenericPoser;
}
namespace RootMotion::FinalIK {
class __GenericPoser__Map;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GenericPoser);
MARK_REF_PTR_T(::RootMotion::FinalIK::__GenericPoser__Map);
// Type: ::Map
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::GenericPoser::Map*
class CORDL_TYPE __GenericPoser__Map : public ::System::Object {
public:
  // Declarations
  /// @brief Field bone, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bone, put = __cordl_internal_set_bone))::UnityW<::UnityEngine::Transform> bone;

  /// @brief Field defaultLocalPosition, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultLocalPosition, put = __cordl_internal_set_defaultLocalPosition))::UnityEngine::Vector3 defaultLocalPosition;

  /// @brief Field defaultLocalRotation, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultLocalRotation, put = __cordl_internal_set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  /// @brief Method FixTransform, addr 0x1390344, size 0x40, virtual false, abstract: false, final false
  inline void FixTransform();

  static inline ::RootMotion::FinalIK::__GenericPoser__Map* New_ctor(::UnityEngine::Transform* bone, ::UnityEngine::Transform* target);

  /// @brief Method StoreDefaultState, addr 0x1390384, size 0x44, virtual false, abstract: false, final false
  inline void StoreDefaultState();

  /// @brief Method Update, addr 0x13901c8, size 0x120, virtual false, abstract: false, final false
  inline void Update(float_t localRotationWeight, float_t localPositionWeight);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultLocalPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultLocalRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_bone(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_defaultLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_defaultLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x1390048, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* bone, ::UnityEngine::Transform* target);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GenericPoser__Map();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GenericPoser__Map", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GenericPoser__Map(__GenericPoser__Map&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GenericPoser__Map", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GenericPoser__Map(__GenericPoser__Map const&) = delete;

  /// @brief Field bone, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field defaultLocalPosition, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultLocalPosition;

  /// @brief Field defaultLocalRotation, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultLocalRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__GenericPoser__Map, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GenericPoser__Map, ___bone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GenericPoser__Map, ___target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GenericPoser__Map, ___defaultLocalPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GenericPoser__Map, ___defaultLocalRotation) == 0x2c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::GenericPoser
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::GenericPoser*
class CORDL_TYPE GenericPoser : public ::RootMotion::FinalIK::Poser {
public:
  // Declarations
  using Map = ::RootMotion::FinalIK::__GenericPoser__Map;

  /// @brief Field maps, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_maps,
                      put = __cordl_internal_set_maps))::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> maps;

  /// @brief Method AutoMapping, addr 0x138fd5c, size 0x258, virtual true, abstract: false, final false
  inline void AutoMapping();

  /// @brief Method FixPoserTransforms, addr 0x13902e8, size 0x5c, virtual true, abstract: false, final false
  inline void FixPoserTransforms();

  /// @brief Method GetTargetNamed, addr 0x138ffb4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetTargetNamed(::StringW tName, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> array);

  /// @brief Method InitiatePoser, addr 0x13900d4, size 0x4, virtual true, abstract: false, final false
  inline void InitiatePoser();

  static inline ::RootMotion::FinalIK::GenericPoser* New_ctor();

  /// @brief Method StoreDefaultState, addr 0x1390078, size 0x5c, virtual false, abstract: false, final false
  inline void StoreDefaultState();

  /// @brief Method UpdatePoser, addr 0x13900d8, size 0xf0, virtual true, abstract: false, final false
  inline void UpdatePoser();

  constexpr ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> const& __cordl_internal_get_maps() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*>& __cordl_internal_get_maps();

  constexpr void __cordl_internal_set_maps(::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> value);

  /// @brief Method .ctor, addr 0x13903c8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPoser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericPoser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPoser(GenericPoser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPoser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPoser(GenericPoser const&) = delete;

  /// @brief Field maps, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> ___maps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GenericPoser, 0x58>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GenericPoser, ___maps) == 0x50, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GenericPoser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GenericPoser*, "RootMotion.FinalIK", "GenericPoser");
NEED_NO_BOX(::RootMotion::FinalIK::__GenericPoser__Map);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__GenericPoser__Map*, "RootMotion.FinalIK", "GenericPoser/Map");
