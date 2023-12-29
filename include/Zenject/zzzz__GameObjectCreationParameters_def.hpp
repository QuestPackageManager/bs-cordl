#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObjectCreationParameters)
namespace Zenject {
class InjectContext;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Zenject {
class GameObjectCreationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GameObjectCreationParameters);
// Type: Zenject::GameObjectCreationParameters
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 407 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2611)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 3266 }), TypeDefinitionIndex(TypeDefinitionIndex(2446)),
// TypeDefinitionIndex(TypeDefinitionIndex(10179))} Self: TypeDefinitionIndex(TypeDefinitionIndex(10877)) CS Name: ::Zenject::GameObjectCreationParameters*
class CORDL_TYPE GameObjectCreationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Name_k__BackingField, put = __set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <GroupName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__GroupName_k__BackingField, put = __set__GroupName_k__BackingField))::StringW _GroupName_k__BackingField;

  /// @brief Field <ParentTransform>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__ParentTransform_k__BackingField, put = __set__ParentTransform_k__BackingField))::UnityEngine::Transform* _ParentTransform_k__BackingField;

  /// @brief Field <ParentTransformGetter>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__ParentTransformGetter_k__BackingField,
                      put = __set__ParentTransformGetter_k__BackingField))::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::Transform*>* _ParentTransformGetter_k__BackingField;

  /// @brief Field <Position>k__BackingField, offset 0x30, size 0x10
  __declspec(property(get = __get__Position_k__BackingField, put = __set__Position_k__BackingField))::System::Nullable_1<::UnityEngine::Vector3> _Position_k__BackingField;

  /// @brief Field <Rotation>k__BackingField, offset 0x40, size 0x14
  __declspec(property(get = __get__Rotation_k__BackingField, put = __set__Rotation_k__BackingField))::System::Nullable_1<::UnityEngine::Quaternion> _Rotation_k__BackingField;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::Zenject::GameObjectCreationParameters* Default;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_GroupName, put = set_GroupName))::StringW GroupName;

  __declspec(property(get = get_ParentTransform, put = set_ParentTransform))::UnityEngine::Transform* ParentTransform;

  __declspec(property(get = get_ParentTransformGetter, put = set_ParentTransformGetter))::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::Transform*>* ParentTransformGetter;

  __declspec(property(get = get_Position, put = set_Position))::System::Nullable_1<::UnityEngine::Vector3> Position;

  __declspec(property(get = get_Rotation, put = set_Rotation))::System::Nullable_1<::UnityEngine::Quaternion> Rotation;

  constexpr ::StringW& __get__Name_k__BackingField();

  constexpr ::StringW const& __get__Name_k__BackingField() const;

  constexpr void __set__Name_k__BackingField(::StringW value);

  constexpr ::StringW& __get__GroupName_k__BackingField();

  constexpr ::StringW const& __get__GroupName_k__BackingField() const;

  constexpr void __set__GroupName_k__BackingField(::StringW value);

  constexpr ::UnityEngine::Transform*& __get__ParentTransform_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__ParentTransform_k__BackingField() const;

  constexpr void __set__ParentTransform_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::Transform*>*& __get__ParentTransformGetter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::Transform*>*> const& __get__ParentTransformGetter_k__BackingField() const;

  constexpr void __set__ParentTransformGetter_k__BackingField(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::Transform*>* value);

  constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __get__Position_k__BackingField();

  constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __get__Position_k__BackingField() const;

  constexpr void __set__Position_k__BackingField(::System::Nullable_1<::UnityEngine::Vector3> value);

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& __get__Rotation_k__BackingField();

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& __get__Rotation_k__BackingField() const;

  constexpr void __set__Rotation_k__BackingField(::System::Nullable_1<::UnityEngine::Quaternion> value);

  static inline void setStaticF_Default(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::GameObjectCreationParameters* getStaticF_Default();

  /// @brief Method get_Name addr 0x2d773e0 size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method set_Name addr 0x2d773e8 size 0x8 virtual false final false
  inline void set_Name(::StringW value);

  /// @brief Method get_GroupName addr 0x2d773f0 size 0x8 virtual false final false
  inline ::StringW get_GroupName();

  /// @brief Method set_GroupName addr 0x2d773f8 size 0x8 virtual false final false
  inline void set_GroupName(::StringW value);

  /// @brief Method get_ParentTransform addr 0x2d77400 size 0x8 virtual false final false
  inline ::UnityEngine::Transform* get_ParentTransform();

  /// @brief Method set_ParentTransform addr 0x2d77408 size 0x8 virtual false final false
  inline void set_ParentTransform(::UnityEngine::Transform* value);

  /// @brief Method get_ParentTransformGetter addr 0x2d77410 size 0x8 virtual false final false
  inline ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::Transform*>* get_ParentTransformGetter();

  /// @brief Method set_ParentTransformGetter addr 0x2d77418 size 0x8 virtual false final false
  inline void set_ParentTransformGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::Transform*>* value);

  /// @brief Method get_Position addr 0x2d77420 size 0xc virtual false final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> get_Position();

  /// @brief Method set_Position addr 0x2d7742c size 0x8 virtual false final false
  inline void set_Position(::System::Nullable_1<::UnityEngine::Vector3> value);

  /// @brief Method get_Rotation addr 0x2d77434 size 0x14 virtual false final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation();

  /// @brief Method set_Rotation addr 0x2d77448 size 0x14 virtual false final false
  inline void set_Rotation(::System::Nullable_1<::UnityEngine::Quaternion> value);

  /// @brief Method GetHashCode addr 0x2d7745c size 0x294 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2d776f0 size 0xd0 virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals addr 0x2d77818 size 0x64 virtual false final false
  inline bool Equals(::Zenject::GameObjectCreationParameters* that);

  /// @brief Method op_Equality addr 0x2d777c0 size 0x58 virtual false final false
  static inline bool op_Equality(::Zenject::GameObjectCreationParameters* left, ::Zenject::GameObjectCreationParameters* right);

  /// @brief Method op_Inequality addr 0x2d7787c size 0x20 virtual false final false
  static inline bool op_Inequality(::Zenject::GameObjectCreationParameters* left, ::Zenject::GameObjectCreationParameters* right);

  static inline ::Zenject::GameObjectCreationParameters* New_ctor();

  /// @brief Method .ctor addr 0x2d73da8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectCreationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectCreationParameters(GameObjectCreationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectCreationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectCreationParameters(GameObjectCreationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectCreationParameters();

public:
  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <GroupName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____GroupName_k__BackingField;

  /// @brief Field <ParentTransform>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____ParentTransform_k__BackingField;

  /// @brief Field <ParentTransformGetter>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::Transform*>* ____ParentTransformGetter_k__BackingField;

  /// @brief Field <Position>k__BackingField, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<::UnityEngine::Vector3> ____Position_k__BackingField;

  /// @brief Field <Rotation>k__BackingField, offset: 0x40, size: 0x14, def value: None
  ::System::Nullable_1<::UnityEngine::Quaternion> ____Rotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GameObjectCreationParameters, 0x58>, "Size mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____GroupName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____ParentTransform_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____ParentTransformGetter_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____Position_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____Rotation_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GameObjectCreationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GameObjectCreationParameters*, "Zenject", "GameObjectCreationParameters");
