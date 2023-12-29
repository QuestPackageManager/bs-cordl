#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalDataStoreHolder)
namespace System {
class LocalDataStore;
}
// Forward declare root types
namespace System {
class LocalDataStoreHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalDataStoreHolder);
// Type: System::LocalDataStoreHolder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2539))
// CS Name: ::System::LocalDataStoreHolder*
class CORDL_TYPE LocalDataStoreHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Store, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Store, put = __set_m_Store))::System::LocalDataStore* m_Store;

  __declspec(property(get = get_Store))::System::LocalDataStore* Store;

  constexpr ::System::LocalDataStore*& __get_m_Store();

  constexpr ::cordl_internals::to_const_pointer<::System::LocalDataStore*> const& __get_m_Store() const;

  constexpr void __set_m_Store(::System::LocalDataStore* value);

  static inline ::System::LocalDataStoreHolder* New_ctor(::System::LocalDataStore* store);

  /// @brief Method .ctor addr 0x247bbf4 size 0x28 virtual false final false
  inline void _ctor(::System::LocalDataStore* store);

  /// @brief Method Finalize addr 0x247bc1c size 0x9c virtual true final false
  inline void Finalize();

  /// @brief Method get_Store addr 0x247bcd4 size 0x8 virtual false final false
  inline ::System::LocalDataStore* get_Store();

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalDataStoreHolder(LocalDataStoreHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalDataStoreHolder(LocalDataStoreHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalDataStoreHolder();

public:
  /// @brief Field m_Store, offset: 0x10, size: 0x8, def value: None
  ::System::LocalDataStore* ___m_Store;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalDataStoreHolder, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::LocalDataStoreHolder, ___m_Store) == 0x10, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::LocalDataStoreHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreHolder*, "System", "LocalDataStoreHolder");
