#pragma once
// IWYU pragma private; include "System\LocalDataStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__LocalDataStoreElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalDataStore)
namespace System {
class LocalDataStoreElement;
}
namespace System {
class LocalDataStoreMgr;
}
namespace System {
class LocalDataStoreSlot;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class LocalDataStore;
}
// Write type traits
MARK_REF_T(::System::LocalDataStore*);
DEFINE_IL2CPP_CLASS(::System::LocalDataStore*, "System", "LocalDataStore");
// Dependencies System.LocalDataStoreElement, System.Object
namespace System {
// Is value type: false
// CS Name: System.LocalDataStore
class CORDL_TYPE LocalDataStore : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_DataTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataTable, put = __cordl_internal_set_m_DataTable)) ::ArrayW<::System::LocalDataStoreElement*> m_DataTable;

  /// @brief Field m_Manager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Manager, put = __cordl_internal_set_m_Manager)) ::System::LocalDataStoreMgr* m_Manager;

  /// @brief Method Dispose, addr 0x5c70b48, size 0x18, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method FreeData, addr 0x5c71168, size 0x48, virtual false, abstract: false, final false
  inline void FreeData(int32_t slot, int64_t cookie);

  /// @brief Method GetData, addr 0x5c70cf8, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Object* GetData(::System::LocalDataStoreSlot* slot);

  static inline ::System::LocalDataStore* New_ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity);

  /// @brief Method PopulateElement, addr 0x5c70ee0, size 0x288, virtual false, abstract: false, final false
  inline ::System::LocalDataStoreElement* PopulateElement(::System::LocalDataStoreSlot* slot);

  /// @brief Method SetData, addr 0x5c70e18, size 0xc8, virtual false, abstract: false, final false
  inline void SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data);

  constexpr ::ArrayW<::System::LocalDataStoreElement*> const& __cordl_internal_get_m_DataTable() const;

  constexpr ::ArrayW<::System::LocalDataStoreElement*>& __cordl_internal_get_m_DataTable();

  constexpr ::System::LocalDataStoreMgr* const& __cordl_internal_get_m_Manager() const;

  constexpr ::System::LocalDataStoreMgr*& __cordl_internal_get_m_Manager();

  constexpr void __cordl_internal_set_m_DataTable(::ArrayW<::System::LocalDataStoreElement*> value);

  constexpr void __cordl_internal_set_m_Manager(::System::LocalDataStoreMgr* value);

  /// @brief Method .ctor, addr 0x5c70b88, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalDataStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalDataStore(LocalDataStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalDataStore(LocalDataStore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2553 };

  /// @brief Field m_DataTable, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::LocalDataStoreElement*> ___m_DataTable;

  /// @brief Field m_Manager, offset: 0x18, size: 0x8, def value: None
  ::System::LocalDataStoreMgr* ___m_Manager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::LocalDataStore, ___m_DataTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::LocalDataStore, ___m_Manager) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::LocalDataStore) == 0x20, "Size mismatch!");

} // namespace System
