#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProviderData)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ProviderData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ProviderData);
// Type: System.Runtime.Remoting::ProviderData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3066))
// CS Name: ::System.Runtime.Remoting::ProviderData*
class CORDL_TYPE ProviderData : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ref, offset 0x10, size 0x8
  __declspec(property(get = __get_Ref, put = __set_Ref))::StringW Ref;

  /// @brief Field Type, offset 0x18, size 0x8
  __declspec(property(get = __get_Type, put = __set_Type))::StringW Type;

  /// @brief Field Id, offset 0x20, size 0x8
  __declspec(property(get = __get_Id, put = __set_Id))::StringW Id;

  /// @brief Field CustomProperties, offset 0x28, size 0x8
  __declspec(property(get = __get_CustomProperties, put = __set_CustomProperties))::System::Collections::Hashtable* CustomProperties;

  /// @brief Field CustomData, offset 0x30, size 0x8
  __declspec(property(get = __get_CustomData, put = __set_CustomData))::System::Collections::IList* CustomData;

  constexpr ::StringW& __get_Ref();

  constexpr ::StringW const& __get_Ref() const;

  constexpr void __set_Ref(::StringW value);

  constexpr ::StringW& __get_Type();

  constexpr ::StringW const& __get_Type() const;

  constexpr void __set_Type(::StringW value);

  constexpr ::StringW& __get_Id();

  constexpr ::StringW const& __get_Id() const;

  constexpr void __set_Id(::StringW value);

  constexpr ::System::Collections::Hashtable*& __get_CustomProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_CustomProperties() const;

  constexpr void __set_CustomProperties(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::IList*& __get_CustomData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_CustomData() const;

  constexpr void __set_CustomData(::System::Collections::IList* value);

  /// @brief Method CopyFrom addr 0x2331754 size 0x704 virtual false final false
  inline void CopyFrom(::System::Runtime::Remoting::ProviderData* other);

  static inline ::System::Runtime::Remoting::ProviderData* New_ctor();

  /// @brief Method .ctor addr 0x2335af4 size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ProviderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderData(ProviderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderData(ProviderData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderData();

public:
  /// @brief Field Ref, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Ref;

  /// @brief Field Type, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Type;

  /// @brief Field Id, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Id;

  /// @brief Field CustomProperties, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___CustomProperties;

  /// @brief Field CustomData, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IList* ___CustomData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ProviderData, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___Ref) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___Id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___CustomProperties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___CustomData) == 0x30, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ProviderData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ProviderData*, "System.Runtime.Remoting", "ProviderData");
