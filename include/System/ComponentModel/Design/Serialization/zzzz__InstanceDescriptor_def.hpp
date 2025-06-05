#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/Serialization/InstanceDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InstanceDescriptor)
namespace System::Collections {
class ICollection;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel::Design::Serialization {
class InstanceDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::Serialization::InstanceDescriptor);
// Dependencies System.Object
namespace System::ComponentModel::Design::Serialization {
// Is value type: false
// CS Name: System.ComponentModel.Design.Serialization.InstanceDescriptor
class CORDL_TYPE InstanceDescriptor : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Arguments)) ::System::Collections::ICollection* Arguments;

  __declspec(property(get = get_MemberInfo)) ::System::Reflection::MemberInfo* MemberInfo;

  /// @brief Field <Arguments>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Arguments_k__BackingField, put = __cordl_internal_set__Arguments_k__BackingField)) ::System::Collections::ICollection* _Arguments_k__BackingField;

  /// @brief Field <IsComplete>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__IsComplete_k__BackingField, put = __cordl_internal_set__IsComplete_k__BackingField)) bool _IsComplete_k__BackingField;

  /// @brief Field <MemberInfo>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__MemberInfo_k__BackingField, put = __cordl_internal_set__MemberInfo_k__BackingField)) ::System::Reflection::MemberInfo* _MemberInfo_k__BackingField;

  /// @brief Method Invoke, addr 0x446f728, size 0x358, virtual false, abstract: false, final false
  inline ::System::Object* Invoke();

  static inline ::System::ComponentModel::Design::Serialization::InstanceDescriptor* New_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments);

  static inline ::System::ComponentModel::Design::Serialization::InstanceDescriptor* New_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, bool isComplete);

  constexpr ::System::Collections::ICollection* const& __cordl_internal_get__Arguments_k__BackingField() const;

  constexpr ::System::Collections::ICollection*& __cordl_internal_get__Arguments_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsComplete_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsComplete_k__BackingField();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get__MemberInfo_k__BackingField() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__MemberInfo_k__BackingField();

  constexpr void __cordl_internal_set__Arguments_k__BackingField(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set__IsComplete_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MemberInfo_k__BackingField(::System::Reflection::MemberInfo* value);

  /// @brief Method .ctor, addr 0x447f7bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments);

  /// @brief Method .ctor, addr 0x447f7c4, size 0x508, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, bool isComplete);

  /// @brief Method get_Arguments, addr 0x447fccc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_Arguments();

  /// @brief Method get_MemberInfo, addr 0x447fcd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_MemberInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDescriptor(InstanceDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDescriptor(InstanceDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9482 };

  /// @brief Field <Arguments>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ICollection* ____Arguments_k__BackingField;

  /// @brief Field <IsComplete>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____IsComplete_k__BackingField;

  /// @brief Field <MemberInfo>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____MemberInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::Design::Serialization::InstanceDescriptor, ____Arguments_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::Serialization::InstanceDescriptor, ____IsComplete_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::Serialization::InstanceDescriptor, ____MemberInfo_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::Serialization::InstanceDescriptor, 0x28>, "Size mismatch!");

} // namespace System::ComponentModel::Design::Serialization
NEED_NO_BOX(::System::ComponentModel::Design::Serialization::InstanceDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::Serialization::InstanceDescriptor*, "System.ComponentModel.Design.Serialization", "InstanceDescriptor");
