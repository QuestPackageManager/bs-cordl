#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeserializableList_1)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Oculus::Platform::Models {
template <typename T> class DeserializableList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Oculus::Platform::Models::DeserializableList_1);
// Type: Oculus.Platform.Models::DeserializableList`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13430))
// CS Name: ::Oculus.Platform.Models::DeserializableList`1<T>*
class CORDL_TYPE DeserializableList_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _Data, offset 0x10, size 0x8
  __declspec(property(get = __get__Data, put = __set__Data))::System::Collections::Generic::List_1<T>* _Data;

  /// @brief Field _NextUrl, offset 0x18, size 0x8
  __declspec(property(get = __get__NextUrl, put = __set__NextUrl))::StringW _NextUrl;

  /// @brief Field _PreviousUrl, offset 0x20, size 0x8
  __declspec(property(get = __get__PreviousUrl, put = __set__PreviousUrl))::StringW _PreviousUrl;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool System_Collections_Generic_ICollection_T__IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_Data))::System::Collections::Generic::List_1<T>* Data;

  __declspec(property(get = get_HasNextPage)) bool HasNextPage;

  __declspec(property(get = get_HasPreviousPage)) bool HasPreviousPage;

  __declspec(property(get = get_NextUrl))::StringW NextUrl;

  __declspec(property(get = get_PreviousUrl))::StringW PreviousUrl;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
  constexpr operator ::System::Collections::Generic::IList_1<T>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<T>"
  constexpr ::System::Collections::Generic::IList_1<T>* i___System__Collections__Generic__IList_1_T_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::Generic::List_1<T>*& __get__Data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __get__Data() const;

  constexpr void __set__Data(::System::Collections::Generic::List_1<T>* value);

  constexpr ::StringW& __get__NextUrl();

  constexpr ::StringW const& __get__NextUrl() const;

  constexpr void __set__NextUrl(::StringW value);

  constexpr ::StringW& __get__PreviousUrl();

  constexpr ::StringW const& __get__PreviousUrl() const;

  constexpr void __set__PreviousUrl(::StringW value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t IndexOf(T obj);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, T value);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(T item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T item);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(int32_t index, T item);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method GetEnumerator1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator1();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* get_Data();

  /// @brief Method get_HasNextPage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_HasNextPage();

  /// @brief Method get_HasPreviousPage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_HasPreviousPage();

  /// @brief Method get_NextUrl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_NextUrl();

  /// @brief Method get_PreviousUrl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_PreviousUrl();

  static inline ::Oculus::Platform::Models::DeserializableList_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DeserializableList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeserializableList_1(DeserializableList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeserializableList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeserializableList_1(DeserializableList_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeserializableList_1();

public:
  /// @brief Field _Data, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____Data;

  /// @brief Field _NextUrl, offset: 0x18, size: 0x8, def value: None
  ::StringW ____NextUrl;

  /// @brief Field _PreviousUrl, offset: 0x20, size: 0x8, def value: None
  ::StringW ____PreviousUrl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Oculus::Platform::Models
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Models::DeserializableList_1, "Oculus.Platform.Models", "DeserializableList`1");
