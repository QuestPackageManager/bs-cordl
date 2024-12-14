#pragma once
// IWYU pragma private; include "Zenject/GameObjectCreationParameters.hpp"
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
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class GameObjectCreationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GameObjectCreationParameters);
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Zenject {
// Is value type: false
// CS Name: Zenject.GameObjectCreationParameters
class CORDL_TYPE GameObjectCreationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::Zenject::GameObjectCreationParameters* Default;

  __declspec(property(get = get_GroupName, put = set_GroupName)) ::StringW GroupName;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_ParentTransform, put = set_ParentTransform)) ::UnityW<::UnityEngine::Transform> ParentTransform;

  __declspec(property(get = get_ParentTransformGetter, put = set_ParentTransformGetter)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* ParentTransformGetter;

  __declspec(property(get = get_Position, put = set_Position)) ::System::Nullable_1<::UnityEngine::Vector3> Position;

  __declspec(property(get = get_Rotation, put = set_Rotation)) ::System::Nullable_1<::UnityEngine::Quaternion> Rotation;

  /// @brief Field <GroupName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__GroupName_k__BackingField, put = __cordl_internal_set__GroupName_k__BackingField)) ::StringW _GroupName_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field <ParentTransformGetter>k__BackingField, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__ParentTransformGetter_k__BackingField,
      put = __cordl_internal_set__ParentTransformGetter_k__BackingField)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* _ParentTransformGetter_k__BackingField;

  /// @brief Field <ParentTransform>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ParentTransform_k__BackingField, put = __cordl_internal_set__ParentTransform_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _ParentTransform_k__BackingField;

  /// @brief Field <Position>k__BackingField, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__Position_k__BackingField, put = __cordl_internal_set__Position_k__BackingField)) ::System::Nullable_1<::UnityEngine::Vector3>
      _Position_k__BackingField;

  /// @brief Field <Rotation>k__BackingField, offset 0x40, size 0x14
  __declspec(property(get = __cordl_internal_get__Rotation_k__BackingField, put = __cordl_internal_set__Rotation_k__BackingField)) ::System::Nullable_1<::UnityEngine::Quaternion>
      _Rotation_k__BackingField;

  /// @brief Method Equals, addr 0x4b14398, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x4b144c0, size 0x64, virtual false, abstract: false, final false
  inline bool Equals(::Zenject::GameObjectCreationParameters* that);

  /// @brief Method GetHashCode, addr 0x4b1410c, size 0x28c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Zenject::GameObjectCreationParameters* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__GroupName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__GroupName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__ParentTransformGetter_k__BackingField() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__ParentTransformGetter_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__ParentTransform_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__ParentTransform_k__BackingField();

  constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__Position_k__BackingField() const;

  constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__Position_k__BackingField();

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& __cordl_internal_get__Rotation_k__BackingField() const;

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& __cordl_internal_get__Rotation_k__BackingField();

  constexpr void __cordl_internal_set__GroupName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ParentTransformGetter_k__BackingField(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set__ParentTransform_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__Position_k__BackingField(::System::Nullable_1<::UnityEngine::Vector3> value);

  constexpr void __cordl_internal_set__Rotation_k__BackingField(::System::Nullable_1<::UnityEngine::Quaternion> value);

  /// @brief Method .ctor, addr 0x4b10bb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::GameObjectCreationParameters* getStaticF_Default();

  /// @brief Method get_GroupName, addr 0x4b140a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GroupName();

  /// @brief Method get_Name, addr 0x4b14090, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ParentTransform, addr 0x4b140b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_ParentTransform();

  /// @brief Method get_ParentTransformGetter, addr 0x4b140c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* get_ParentTransformGetter();

  /// @brief Method get_Position, addr 0x4b140d0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> get_Position();

  /// @brief Method get_Rotation, addr 0x4b140e4, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation();

  /// @brief Method op_Equality, addr 0x4b14468, size 0x58, virtual false, abstract: false, final false
  static inline bool op_Equality(::Zenject::GameObjectCreationParameters* left, ::Zenject::GameObjectCreationParameters* right);

  /// @brief Method op_Inequality, addr 0x4b14524, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Zenject::GameObjectCreationParameters* left, ::Zenject::GameObjectCreationParameters* right);

  static inline void setStaticF_Default(::Zenject::GameObjectCreationParameters* value);

  /// @brief Method set_GroupName, addr 0x4b140a8, size 0x8, virtual false, abstract: false, final false
  inline void set_GroupName(::StringW value);

  /// @brief Method set_Name, addr 0x4b14098, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_ParentTransform, addr 0x4b140b8, size 0x8, virtual false, abstract: false, final false
  inline void set_ParentTransform(::UnityEngine::Transform* value);

  /// @brief Method set_ParentTransformGetter, addr 0x4b140c8, size 0x8, virtual false, abstract: false, final false
  inline void set_ParentTransformGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* value);

  /// @brief Method set_Position, addr 0x4b140dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Position(::System::Nullable_1<::UnityEngine::Vector3> value);

  /// @brief Method set_Rotation, addr 0x4b140f8, size 0x14, virtual false, abstract: false, final false
  inline void set_Rotation(::System::Nullable_1<::UnityEngine::Quaternion> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectCreationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectCreationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectCreationParameters(GameObjectCreationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectCreationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectCreationParameters(GameObjectCreationParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12286 };

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <GroupName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____GroupName_k__BackingField;

  /// @brief Field <ParentTransform>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____ParentTransform_k__BackingField;

  /// @brief Field <ParentTransformGetter>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* ____ParentTransformGetter_k__BackingField;

  /// @brief Field <Position>k__BackingField, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<::UnityEngine::Vector3> ____Position_k__BackingField;

  /// @brief Field <Rotation>k__BackingField, offset: 0x40, size: 0x14, def value: None
  ::System::Nullable_1<::UnityEngine::Quaternion> ____Rotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____GroupName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____ParentTransform_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____ParentTransformGetter_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____Position_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectCreationParameters, ____Rotation_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::GameObjectCreationParameters, 0x58>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GameObjectCreationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GameObjectCreationParameters*, "Zenject", "GameObjectCreationParameters");
