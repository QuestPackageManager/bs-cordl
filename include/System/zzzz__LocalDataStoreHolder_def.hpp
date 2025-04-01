#pragma once
// IWYU pragma private; include "System/LocalDataStoreHolder.hpp"
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
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.LocalDataStoreHolder
class CORDL_TYPE LocalDataStoreHolder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Store)) ::System::LocalDataStore* Store;

  /// @brief Field m_Store, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Store, put = __cordl_internal_set_m_Store)) ::System::LocalDataStore* m_Store;

  /// @brief Method Finalize, addr 0x3e0f420, size 0x9c, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::LocalDataStoreHolder* New_ctor(::System::LocalDataStore* store);

  constexpr ::System::LocalDataStore* const& __cordl_internal_get_m_Store() const;

  constexpr ::System::LocalDataStore*& __cordl_internal_get_m_Store();

  constexpr void __cordl_internal_set_m_Store(::System::LocalDataStore* value);

  /// @brief Method .ctor, addr 0x3e0f3f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::LocalDataStore* store);

  /// @brief Method get_Store, addr 0x3e0f4d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::LocalDataStore* get_Store();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalDataStoreHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalDataStoreHolder(LocalDataStoreHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalDataStoreHolder(LocalDataStoreHolder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2542 };

  /// @brief Field m_Store, offset: 0x10, size: 0x8, def value: None
  ::System::LocalDataStore* ___m_Store;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::LocalDataStoreHolder, ___m_Store) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::LocalDataStoreHolder, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::LocalDataStoreHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreHolder*, "System", "LocalDataStoreHolder");
