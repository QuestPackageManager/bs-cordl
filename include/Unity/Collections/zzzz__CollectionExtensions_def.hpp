#pragma once
// IWYU pragma private; include "Unity/Collections/CollectionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionExtensions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Collections {
template <typename T> class CollectionExtensions___c__DisplayClass7_0_1;
}
// Forward declare root types
namespace Unity::Collections {
class CollectionExtensions;
}
namespace Unity::Collections {
template <typename T> class CollectionExtensions___c__DisplayClass7_0_1;
}
// Write type traits
MARK_REF_T(::Unity::Collections::CollectionExtensions*);
MARK_GEN_REF_T_PTR(::Unity::Collections::CollectionExtensions___c__DisplayClass7_0_1);
DEFINE_IL2CPP_CLASS(::Unity::Collections::CollectionExtensions*, "Unity.Collections", "CollectionExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Collections::CollectionExtensions___c__DisplayClass7_0_1, "Unity.Collections", "CollectionExtensions/<>c__DisplayClass7_0`1");
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Collections.CollectionExtensions/<>c__DisplayClass7_0`1<T>
class CORDL_TYPE CollectionExtensions___c__DisplayClass7_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field serializeElement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serializeElement, put = __cordl_internal_set_serializeElement)) ::System::Func_2<T, ::StringW>* serializeElement;

  static inline ::Unity::Collections::CollectionExtensions___c__DisplayClass7_0_1<T>* New_ctor();

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
  constexpr CollectionExtensions___c__DisplayClass7_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions___c__DisplayClass7_0_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionExtensions___c__DisplayClass7_0_1(CollectionExtensions___c__DisplayClass7_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions___c__DisplayClass7_0_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionExtensions___c__DisplayClass7_0_1(CollectionExtensions___c__DisplayClass7_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9555 };

  /// @brief Field serializeElement, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<T, ::StringW>* ___serializeElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
// [VisibleToOtherModules]
// [Extension]
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.CollectionExtensions
class CORDL_TYPE CollectionExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass7_0_1 = ::Unity::Collections::CollectionExtensions___c__DisplayClass7_0_1<T>;

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method AddToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AddToArray(::by_ref<::ArrayW<T>> array, T item);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method InsertIntoArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InsertIntoArray(::by_ref<::ArrayW<T>> array, int32_t index, T item);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
  /// @brief Method RemoveFromArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RemoveFromArray(::by_ref<::ArrayW<T>> array, int32_t index);

  /// [Extension]
  /// @brief Method SerializedView, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::StringW SerializedView(/* [DisallowNull] */ ::System::Collections::Generic::IEnumerable_1<T>* collection, /* [DisallowNull] */ ::System::Func_2<T, ::StringW>* serializeElement);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionExtensions(CollectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionExtensions(CollectionExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::CollectionExtensions) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
