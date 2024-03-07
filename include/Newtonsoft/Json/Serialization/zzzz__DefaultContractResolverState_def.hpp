#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultContractResolverState)
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
struct ResolverContractKey;
}
namespace Newtonsoft::Json::Utilities {
class PropertyNameTable;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultContractResolverState;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::DefaultContractResolverState);
// Type: Newtonsoft.Json.Serialization::DefaultContractResolverState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::DefaultContractResolverState*
class CORDL_TYPE DefaultContractResolverState : public ::System::Object {
public:
  // Declarations
  /// @brief Field ContractCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ContractCache,
                      put = __cordl_internal_set_ContractCache))::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,
                                                                                                             ::Newtonsoft::Json::Serialization::JsonContract*>* ContractCache;

  /// @brief Field NameTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NameTable, put = __cordl_internal_set_NameTable))::Newtonsoft::Json::Utilities::PropertyNameTable* NameTable;

  static inline ::Newtonsoft::Json::Serialization::DefaultContractResolverState* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey, ::Newtonsoft::Json::Serialization::JsonContract*>*&
  __cordl_internal_get_ContractCache();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey, ::Newtonsoft::Json::Serialization::JsonContract*>*> const&
  __cordl_internal_get_ContractCache() const;

  constexpr ::Newtonsoft::Json::Utilities::PropertyNameTable*& __cordl_internal_get_NameTable();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::PropertyNameTable*> const& __cordl_internal_get_NameTable() const;

  constexpr void
  __cordl_internal_set_ContractCache(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey, ::Newtonsoft::Json::Serialization::JsonContract*>* value);

  constexpr void __cordl_internal_set_NameTable(::Newtonsoft::Json::Utilities::PropertyNameTable* value);

  /// @brief Method .ctor, addr 0x27c097c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultContractResolverState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultContractResolverState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultContractResolverState(DefaultContractResolverState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultContractResolverState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultContractResolverState(DefaultContractResolverState const&) = delete;

  /// @brief Field ContractCache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey, ::Newtonsoft::Json::Serialization::JsonContract*>* ___ContractCache;

  /// @brief Field NameTable, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::PropertyNameTable* ___NameTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::DefaultContractResolverState, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::DefaultContractResolverState, ___ContractCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::DefaultContractResolverState, ___NameTable) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultContractResolverState);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultContractResolverState*, "Newtonsoft.Json.Serialization", "DefaultContractResolverState");
