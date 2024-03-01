#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmodifiableList)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableList;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableList);
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableList
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Collections::UnmodifiableList*
class CORDL_TYPE UnmodifiableList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x11ca76c, size 0x40, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* o);

  /// @brief Method Clear, addr 0x11ca7ac, size 0x40, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Contains(::System::Object* o);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetValue(int32_t i);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t IndexOf(::System::Object* o);

  /// @brief Method Insert, addr 0x11ca7ec, size 0x40, virtual true, abstract: false, final false
  inline void Insert(int32_t i, ::System::Object* o);

  static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableList* New_ctor();

  /// @brief Method Remove, addr 0x11ca834, size 0x40, virtual true, abstract: false, final false
  inline void Remove(::System::Object* o);

  /// @brief Method RemoveAt, addr 0x11ca874, size 0x40, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t i);

  /// @brief Method .ctor, addr 0x11ca764, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x11ca82c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x11ca8b4, size 0x10, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t i);

  /// @brief Method get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Method set_Item, addr 0x11ca8c4, size 0x40, virtual true, abstract: false, final false
  inline void set_Item(int32_t i, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmodifiableList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmodifiableList(UnmodifiableList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmodifiableList(UnmodifiableList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableList, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableList*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableList");
