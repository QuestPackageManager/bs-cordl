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
// CS Name: ::System.Runtime.Remoting::ProviderData*
class CORDL_TYPE ProviderData : public ::System::Object {
public:
  // Declarations
  /// @brief Field CustomData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomData, put = __cordl_internal_set_CustomData))::System::Collections::IList* CustomData;

  /// @brief Field CustomProperties, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomProperties, put = __cordl_internal_set_CustomProperties))::System::Collections::Hashtable* CustomProperties;

  /// @brief Field Id, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id))::StringW Id;

  /// @brief Field Ref, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Ref, put = __cordl_internal_set_Ref))::StringW Ref;

  /// @brief Field Type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::StringW Type;

  /// @brief Method CopyFrom, addr 0x2710990, size 0x704, virtual false, abstract: false, final false
  inline void CopyFrom(::System::Runtime::Remoting::ProviderData* other);

  static inline ::System::Runtime::Remoting::ProviderData* New_ctor();

  constexpr ::System::Collections::IList*& __cordl_internal_get_CustomData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_CustomData() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_CustomProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_CustomProperties() const;

  constexpr ::StringW const& __cordl_internal_get_Id() const;

  constexpr ::StringW& __cordl_internal_get_Id();

  constexpr ::StringW const& __cordl_internal_get_Ref() const;

  constexpr ::StringW& __cordl_internal_get_Ref();

  constexpr ::StringW const& __cordl_internal_get_Type() const;

  constexpr ::StringW& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_CustomData(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_CustomProperties(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_Id(::StringW value);

  constexpr void __cordl_internal_set_Ref(::StringW value);

  constexpr void __cordl_internal_set_Type(::StringW value);

  /// @brief Method .ctor, addr 0x2710928, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProviderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderData(ProviderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderData(ProviderData const&) = delete;

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
