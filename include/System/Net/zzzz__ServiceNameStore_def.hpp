#pragma once
// IWYU pragma private; include "System/Net/ServiceNameStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServiceNameStore)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Security::Authentication::ExtendedProtection {
class ServiceNameCollection;
}
// Forward declare root types
namespace System::Net {
class ServiceNameStore;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ServiceNameStore);
// Type: System.Net::ServiceNameStore
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::ServiceNameStore*
class CORDL_TYPE ServiceNameStore : public ::System::Object {
public:
  // Declarations
  /// @brief Field serviceNameCollection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_serviceNameCollection,
                      put = __cordl_internal_set_serviceNameCollection)) ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* serviceNameCollection;

  /// @brief Field serviceNames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serviceNames, put = __cordl_internal_set_serviceNames)) ::System::Collections::Generic::List_1<::StringW>* serviceNames;

  static inline ::System::Net::ServiceNameStore* New_ctor();

  constexpr ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*& __cordl_internal_get_serviceNameCollection();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*> const& __cordl_internal_get_serviceNameCollection() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_serviceNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_serviceNames() const;

  constexpr void __cordl_internal_set_serviceNameCollection(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* value);

  constexpr void __cordl_internal_set_serviceNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x4448748, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServiceNameStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServiceNameStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServiceNameStore(ServiceNameStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServiceNameStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServiceNameStore(ServiceNameStore const&) = delete;

  /// @brief Field serviceNames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___serviceNames;

  /// @brief Field serviceNameCollection, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* ___serviceNameCollection;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9600 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ServiceNameStore, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::ServiceNameStore, ___serviceNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServiceNameStore, ___serviceNameCollection) == 0x18, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ServiceNameStore);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServiceNameStore*, "System.Net", "ServiceNameStore");
