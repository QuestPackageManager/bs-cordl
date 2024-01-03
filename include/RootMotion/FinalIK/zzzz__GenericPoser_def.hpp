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
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class __GenericPoser__Map;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12614))
// CS Name: ::GenericPoser::Map*
class CORDL_TYPE __GenericPoser__Map : public ::System::Object {
public:
  // Declarations
  /// @brief Field bone, offset 0x10, size 0x8
  __declspec(property(get = __get_bone, put = __set_bone))::UnityEngine::Transform* bone;

  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::UnityEngine::Transform* target;

  /// @brief Field defaultLocalPosition, offset 0x20, size 0xc
  __declspec(property(get = __get_defaultLocalPosition, put = __set_defaultLocalPosition))::UnityEngine::Vector3 defaultLocalPosition;

  /// @brief Field defaultLocalRotation, offset 0x2c, size 0x10
  __declspec(property(get = __get_defaultLocalRotation, put = __set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  constexpr ::UnityEngine::Transform*& __get_bone();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_bone() const;

  constexpr void __set_bone(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_target() const;

  constexpr void __set_target(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get_defaultLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get_defaultLocalPosition() const;

  constexpr void __set_defaultLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_defaultLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_defaultLocalRotation() const;

  constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion value);

  static inline ::RootMotion::FinalIK::__GenericPoser__Map* New_ctor(::UnityEngine::Transform* bone, ::UnityEngine::Transform* target);

  /// @brief Method .ctor, addr 0x128ca54, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* bone, ::UnityEngine::Transform* target);

  /// @brief Method StoreDefaultState, addr 0x128cd90, size 0x44, virtual false, abstract: false, final false
  inline void StoreDefaultState();

  /// @brief Method FixTransform, addr 0x128cd50, size 0x40, virtual false, abstract: false, final false
  inline void FixTransform();

  /// @brief Method Update, addr 0x128cbd4, size 0x120, virtual false, abstract: false, final false
  inline void Update(float_t localRotationWeight, float_t localPositionWeight);

  // Ctor Parameters [CppParam { name: "", ty: "__GenericPoser__Map", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GenericPoser__Map(__GenericPoser__Map&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GenericPoser__Map", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GenericPoser__Map(__GenericPoser__Map const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GenericPoser__Map();

public:
  /// @brief Field bone, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___bone;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___target;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12615))
// CS Name: ::RootMotion.FinalIK::GenericPoser*
class CORDL_TYPE GenericPoser : public ::RootMotion::FinalIK::Poser {
public:
  // Declarations
  using Map = ::RootMotion::FinalIK::__GenericPoser__Map;

  /// @brief Field maps, offset 0x50, size 0x8
  __declspec(property(get = __get_maps, put = __set_maps))::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> maps;

  constexpr ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*>& __get_maps();

  constexpr ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> const& __get_maps() const;

  constexpr void __set_maps(::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> value);

  /// @brief Method AutoMapping, addr 0x128c768, size 0x258, virtual true, abstract: false, final false
  inline void AutoMapping();

  /// @brief Method InitiatePoser, addr 0x128cae0, size 0x4, virtual true, abstract: false, final false
  inline void InitiatePoser();

  /// @brief Method UpdatePoser, addr 0x128cae4, size 0xf0, virtual true, abstract: false, final false
  inline void UpdatePoser();

  /// @brief Method FixPoserTransforms, addr 0x128ccf4, size 0x5c, virtual true, abstract: false, final false
  inline void FixPoserTransforms();

  /// @brief Method StoreDefaultState, addr 0x128ca84, size 0x5c, virtual false, abstract: false, final false
  inline void StoreDefaultState();

  /// @brief Method GetTargetNamed, addr 0x128c9c0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* GetTargetNamed(::StringW tName, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> array);

  static inline ::RootMotion::FinalIK::GenericPoser* New_ctor();

  /// @brief Method .ctor, addr 0x128cdd4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GenericPoser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPoser(GenericPoser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPoser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPoser(GenericPoser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPoser();

public:
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
