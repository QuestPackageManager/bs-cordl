#pragma once
// IWYU pragma private; include "UnityEngine/NoAllocHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoAllocHelpers)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Array;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace UnityEngine {
template <typename T> class NoAllocHelpers_ListPrivateFieldAccess_1;
}
// Forward declare root types
namespace UnityEngine {
class NoAllocHelpers;
}
namespace UnityEngine {
template <typename T> class NoAllocHelpers_ListPrivateFieldAccess_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::NoAllocHelpers);
MARK_GEN_REF_PTR_T(::UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1);
// Dependencies System.Object
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.NoAllocHelpers/ListPrivateFieldAccess`1<T>
class CORDL_TYPE NoAllocHelpers_ListPrivateFieldAccess_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items)) ::ArrayW<T, ::Array<T>*> _items;

  /// @brief Field _size, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int32_t _size;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__items() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__items();

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__items(::ArrayW<T, ::Array<T>*> value);

  constexpr void __cordl_internal_set__size(int32_t value);

  constexpr void __cordl_internal_set__version(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoAllocHelpers_ListPrivateFieldAccess_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoAllocHelpers_ListPrivateFieldAccess_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoAllocHelpers_ListPrivateFieldAccess_1(NoAllocHelpers_ListPrivateFieldAccess_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoAllocHelpers_ListPrivateFieldAccess_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoAllocHelpers_ListPrivateFieldAccess_1(NoAllocHelpers_ListPrivateFieldAccess_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10334 };

  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____items;

  /// @brief Field _size, offset: 0x18, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.NoAllocHelpers
class CORDL_TYPE NoAllocHelpers : public ::System::Object {
public:
  // Declarations
  template <typename T> using ListPrivateFieldAccess_1 = ::UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1<T>;

  /// @brief Method EnsureListElemCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void EnsureListElemCount(::System::Collections::Generic::List_1<T>* list, int32_t count);

  /// @brief Method ExtractArrayFromList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ExtractArrayFromList(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method ResetListContents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ResetListContents(::System::Collections::Generic::List_1<T>* list, ::System::ReadOnlySpan_1<T> span);

  /// @brief Method ResetListSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ResetListSize(::System::Collections::Generic::List_1<T>* list, int32_t size);

  /// @brief Method SafeLength, addr 0x691b480, size 0x10, virtual false, abstract: false, final false
  static inline int32_t SafeLength(::System::Array* values);

  /// @brief Method SafeLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t SafeLength(::System::Collections::Generic::List_1<T>* values);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoAllocHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoAllocHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoAllocHelpers(NoAllocHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoAllocHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoAllocHelpers(NoAllocHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10335 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::NoAllocHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::NoAllocHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NoAllocHelpers*, "UnityEngine", "NoAllocHelpers");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::NoAllocHelpers_ListPrivateFieldAccess_1, "UnityEngine", "NoAllocHelpers/ListPrivateFieldAccess`1");
