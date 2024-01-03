#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WellKnownServiceTypeEntry)
namespace System::Runtime::Remoting {
struct WellKnownObjectMode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class WellKnownServiceTypeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::WellKnownServiceTypeEntry);
// Type: System.Runtime.Remoting::WellKnownServiceTypeEntry
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3079)), TypeDefinitionIndex(TypeDefinitionIndex(3082))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3083))
// CS Name: ::System.Runtime.Remoting::WellKnownServiceTypeEntry*
class CORDL_TYPE WellKnownServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
  // Declarations
  /// @brief Field obj_type, offset 0x20, size 0x8
  __declspec(property(get = __get_obj_type, put = __set_obj_type))::System::Type* obj_type;

  /// @brief Field obj_uri, offset 0x28, size 0x8
  __declspec(property(get = __get_obj_uri, put = __set_obj_uri))::StringW obj_uri;

  /// @brief Field obj_mode, offset 0x30, size 0x4
  __declspec(property(get = __get_obj_mode, put = __set_obj_mode))::System::Runtime::Remoting::WellKnownObjectMode obj_mode;

  __declspec(property(get = get_Mode))::System::Runtime::Remoting::WellKnownObjectMode Mode;

  __declspec(property(get = get_ObjectType))::System::Type* ObjectType;

  __declspec(property(get = get_ObjectUri))::StringW ObjectUri;

  constexpr ::System::Type*& __get_obj_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_obj_type() const;

  constexpr void __set_obj_type(::System::Type* value);

  constexpr ::StringW& __get_obj_uri();

  constexpr ::StringW const& __get_obj_uri() const;

  constexpr void __set_obj_uri(::StringW value);

  constexpr ::System::Runtime::Remoting::WellKnownObjectMode& __get_obj_mode();

  constexpr ::System::Runtime::Remoting::WellKnownObjectMode const& __get_obj_mode() const;

  constexpr void __set_obj_mode(::System::Runtime::Remoting::WellKnownObjectMode value);

  static inline ::System::Runtime::Remoting::WellKnownServiceTypeEntry* New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUri,
                                                                                 ::System::Runtime::Remoting::WellKnownObjectMode mode);

  /// @brief Method .ctor, addr 0x2495a30, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode);

  /// @brief Method get_Mode, addr 0x2495b70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::WellKnownObjectMode get_Mode();

  /// @brief Method get_ObjectType, addr 0x2495b78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ObjectType();

  /// @brief Method get_ObjectUri, addr 0x2495b80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ObjectUri();

  /// @brief Method ToString, addr 0x2495b88, size 0x178, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "WellKnownServiceTypeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WellKnownServiceTypeEntry(WellKnownServiceTypeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WellKnownServiceTypeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WellKnownServiceTypeEntry(WellKnownServiceTypeEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WellKnownServiceTypeEntry();

public:
  /// @brief Field obj_type, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___obj_type;

  /// @brief Field obj_uri, offset: 0x28, size: 0x8, def value: None
  ::StringW ___obj_uri;

  /// @brief Field obj_mode, offset: 0x30, size: 0x4, def value: None
  ::System::Runtime::Remoting::WellKnownObjectMode ___obj_mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::WellKnownServiceTypeEntry, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::WellKnownServiceTypeEntry, ___obj_type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::WellKnownServiceTypeEntry, ___obj_uri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::WellKnownServiceTypeEntry, ___obj_mode) == 0x30, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::WellKnownServiceTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::WellKnownServiceTypeEntry*, "System.Runtime.Remoting", "WellKnownServiceTypeEntry");
