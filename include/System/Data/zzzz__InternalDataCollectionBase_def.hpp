#pragma once
// IWYU pragma private; include "System/Data/InternalDataCollectionBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalDataCollectionBase)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class CollectionChangeEventArgs;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class InternalDataCollectionBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::InternalDataCollectionBase);
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.InternalDataCollectionBase
class CORDL_TYPE InternalDataCollectionBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_List)) ::System::Collections::ArrayList* List;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field s_refreshEventArgs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_refreshEventArgs, put = setStaticF_s_refreshEventArgs)) ::System::ComponentModel::CollectionChangeEventArgs* s_refreshEventArgs;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x4156374, size 0x48, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* ar, int32_t index);

  /// @brief Method GetEnumerator, addr 0x41563bc, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method NamesEqual, addr 0x41563f0, size 0xac, virtual false, abstract: false, final false
  inline int32_t NamesEqual(::StringW s1, ::StringW s2, bool fCaseSensitive, ::System::Globalization::CultureInfo* locale);

  static inline ::System::Data::InternalDataCollectionBase* New_ctor();

  /// @brief Method .ctor, addr 0x41564a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ComponentModel::CollectionChangeEventArgs* getStaticF_s_refreshEventArgs();

  /// @brief Method get_Count, addr 0x4156348, size 0x2c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x41563e8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_List, addr 0x41564a0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* get_List();

  /// @brief Method get_SyncRoot, addr 0x415649c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_s_refreshEventArgs(::System::ComponentModel::CollectionChangeEventArgs* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalDataCollectionBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalDataCollectionBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalDataCollectionBase(InternalDataCollectionBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalDataCollectionBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalDataCollectionBase(InternalDataCollectionBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::InternalDataCollectionBase, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::InternalDataCollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::InternalDataCollectionBase*, "System.Data", "InternalDataCollectionBase");
