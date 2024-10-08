#pragma once
// IWYU pragma private; include "System/ComponentModel/WeakHashtable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WeakHashtable)
namespace System::Collections {
class IEqualityComparer;
}
namespace System::ComponentModel {
class __WeakHashtable__WeakKeyComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class WeakHashtable;
}
namespace System::ComponentModel {
class __WeakHashtable__WeakKeyComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::WeakHashtable);
MARK_REF_PTR_T(::System::ComponentModel::__WeakHashtable__WeakKeyComparer);
// Type: ::WeakKeyComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::WeakHashtable::WeakKeyComparer*
class CORDL_TYPE __WeakHashtable__WeakKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  static inline ::System::ComponentModel::__WeakHashtable__WeakKeyComparer* New_ctor();

  /// @brief Method System.Collections.IEqualityComparer.Equals, addr 0x4407018, size 0x15c, virtual true, abstract: false, final true
  inline bool System_Collections_IEqualityComparer_Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method System.Collections.IEqualityComparer.GetHashCode, addr 0x4407174, size 0x24, virtual true, abstract: false, final true
  inline int32_t System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj);

  /// @brief Method .ctor, addr 0x4407010, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::IEqualityComparer"
  constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WeakHashtable__WeakKeyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WeakHashtable__WeakKeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WeakHashtable__WeakKeyComparer(__WeakHashtable__WeakKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WeakHashtable__WeakKeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WeakHashtable__WeakKeyComparer(__WeakHashtable__WeakKeyComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9432 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__WeakHashtable__WeakKeyComparer, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::WeakHashtable
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::WeakHashtable*
class CORDL_TYPE WeakHashtable : public ::System::Collections::Hashtable {
public:
  // Declarations
  using WeakKeyComparer = ::System::ComponentModel::__WeakHashtable__WeakKeyComparer;

  /// @brief Field _comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__comparer, put = setStaticF__comparer)) ::System::Collections::IEqualityComparer* _comparer;

  /// @brief Method Clear, addr 0x4406f90, size 0x8, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::System::ComponentModel::WeakHashtable* New_ctor();

  /// @brief Method Remove, addr 0x4406f98, size 0x8, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method .ctor, addr 0x44011c8, size 0x64, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::WeakHashtable, 0x50>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::WeakHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::WeakHashtable*, "System.ComponentModel", "WeakHashtable");
NEED_NO_BOX(::System::ComponentModel::__WeakHashtable__WeakKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__WeakHashtable__WeakKeyComparer*, "System.ComponentModel", "WeakHashtable/WeakKeyComparer");
