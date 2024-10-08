#pragma once
// IWYU pragma private; include "System/Xml/Serialization/UnreferencedObjectEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnreferencedObjectEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class UnreferencedObjectEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::UnreferencedObjectEventArgs);
// Type: System.Xml.Serialization::UnreferencedObjectEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::UnreferencedObjectEventArgs*
class CORDL_TYPE UnreferencedObjectEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field o, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_o, put = __cordl_internal_set_o)) ::System::Object* o;

  static inline ::System::Xml::Serialization::UnreferencedObjectEventArgs* New_ctor(::System::Object* o, ::StringW id);

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::System::Object*& __cordl_internal_get_o();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_o() const;

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_o(::System::Object* value);

  /// @brief Method .ctor, addr 0x42f0b80, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* o, ::StringW id);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnreferencedObjectEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnreferencedObjectEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnreferencedObjectEventArgs(UnreferencedObjectEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnreferencedObjectEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnreferencedObjectEventArgs(UnreferencedObjectEventArgs const&) = delete;

  /// @brief Field o, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___o;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::UnreferencedObjectEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::UnreferencedObjectEventArgs, ___o) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::UnreferencedObjectEventArgs, ___id) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::UnreferencedObjectEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::UnreferencedObjectEventArgs*, "System.Xml.Serialization", "UnreferencedObjectEventArgs");
