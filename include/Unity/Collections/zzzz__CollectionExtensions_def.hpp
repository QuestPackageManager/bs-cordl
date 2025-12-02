#pragma once
// IWYU pragma private; include "Unity/Collections/CollectionExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CollectionExtensions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Collections {
template <typename T> class CollectionExtensions___c__DisplayClass3_0_1;
}
// Forward declare root types
namespace Unity::Collections {
class CollectionExtensions;
}
namespace Unity::Collections {
template <typename T> class CollectionExtensions___c__DisplayClass3_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::CollectionExtensions);
MARK_GEN_REF_PTR_T(::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1);
// Dependencies System.Object
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Collections.CollectionExtensions/<>c__DisplayClass3_0`1<T>
class CORDL_TYPE CollectionExtensions___c__DisplayClass3_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field serializeElement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serializeElement, put = __cordl_internal_set_serializeElement)) ::System::Func_2<T, ::StringW>* serializeElement;

  static inline ::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>* New_ctor();

  /// @brief Method <SerializedView>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW _SerializedView_b__0(T t);

  constexpr ::System::Func_2<T, ::StringW>* const& __cordl_internal_get_serializeElement() const;

  constexpr ::System::Func_2<T, ::StringW>*& __cordl_internal_get_serializeElement();

  constexpr void __cordl_internal_set_serializeElement(::System::Func_2<T, ::StringW>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionExtensions___c__DisplayClass3_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions___c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionExtensions___c__DisplayClass3_0_1(CollectionExtensions___c__DisplayClass3_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions___c__DisplayClass3_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionExtensions___c__DisplayClass3_0_1(CollectionExtensions___c__DisplayClass3_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9956 };

  /// @brief Field serializeElement, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<T, ::StringW>* ___serializeElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.CollectionExtensions
class CORDL_TYPE CollectionExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass3_0_1 = ::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>;

  /// @brief Method SerializedView, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW SerializedView(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Func_2<T, ::StringW>* serializeElement);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionExtensions(CollectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionExtensions(CollectionExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9957 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::CollectionExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::CollectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::CollectionExtensions*, "Unity.Collections", "CollectionExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1, "Unity.Collections", "CollectionExtensions/<>c__DisplayClass3_0`1");
