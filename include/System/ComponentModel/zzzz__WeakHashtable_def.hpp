#pragma once
// IWYU pragma private; include "System/ComponentModel/WeakHashtable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WeakHashtable)
namespace System::Collections {
class IEqualityComparer;
}
namespace System::ComponentModel {
class WeakHashtable_WeakKeyComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class WeakHashtable;
}
namespace System::ComponentModel {
class WeakHashtable_WeakKeyComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::WeakHashtable);
MARK_REF_PTR_T(::System::ComponentModel::WeakHashtable_WeakKeyComparer);
// Dependencies System.Collections.IEqualityComparer, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.WeakHashtable/WeakKeyComparer
class CORDL_TYPE WeakHashtable_WeakKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  static inline ::System::ComponentModel::WeakHashtable_WeakKeyComparer* New_ctor();

  /// @brief Method System.Collections.IEqualityComparer.Equals, addr 0x4482900, size 0x15c, virtual true, abstract: false, final true
  inline bool System_Collections_IEqualityComparer_Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method System.Collections.IEqualityComparer.GetHashCode, addr 0x4482a5c, size 0x24, virtual true, abstract: false, final true
  inline int32_t System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj);

  /// @brief Method .ctor, addr 0x44828f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::IEqualityComparer"
  constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WeakHashtable_WeakKeyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WeakHashtable_WeakKeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WeakHashtable_WeakKeyComparer(WeakHashtable_WeakKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WeakHashtable_WeakKeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WeakHashtable_WeakKeyComparer(WeakHashtable_WeakKeyComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9466 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::WeakHashtable_WeakKeyComparer, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.Collections.Hashtable
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.WeakHashtable
class CORDL_TYPE WeakHashtable : public ::System::Collections::Hashtable {
public:
  // Declarations
  using WeakKeyComparer = ::System::ComponentModel::WeakHashtable_WeakKeyComparer;

  /// @brief Field _comparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__comparer, put = setStaticF__comparer)) ::System::Collections::IEqualityComparer* _comparer;

  /// @brief Method Clear, addr 0x4482878, size 0x8, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::System::ComponentModel::WeakHashtable* New_ctor();

  /// @brief Method Remove, addr 0x4482880, size 0x8, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method .ctor, addr 0x447cab0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IEqualityComparer* getStaticF__comparer();

  static inline void setStaticF__comparer(::System::Collections::IEqualityComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WeakHashtable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WeakHashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WeakHashtable(WeakHashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WeakHashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WeakHashtable(WeakHashtable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::WeakHashtable, 0x50>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::WeakHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::WeakHashtable*, "System.ComponentModel", "WeakHashtable");
NEED_NO_BOX(::System::ComponentModel::WeakHashtable_WeakKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::WeakHashtable_WeakKeyComparer*, "System.ComponentModel", "WeakHashtable/WeakKeyComparer");
