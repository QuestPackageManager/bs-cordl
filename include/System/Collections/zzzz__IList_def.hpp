#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IList)
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace System::Collections {
class IList;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IList);
// Type: System.Collections::IList
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3762))
// CS Name: ::System.Collections::IList*
class CORDL_TYPE IList {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Item(int32_t index, ::System::Object* value);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Add(::System::Object* value);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Contains(::System::Object* value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsFixedSize();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Insert(int32_t index, ::System::Object* value);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveAt(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "IList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IList(IList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IList(IList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IList*, "System.Collections", "IList");
