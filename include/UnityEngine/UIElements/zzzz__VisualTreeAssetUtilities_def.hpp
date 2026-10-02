#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAssetUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeAssetUtilities)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class UxmlAsset;
}
namespace UnityEngine::UIElements {
struct UxmlNamespaceDefinition;
}
namespace UnityEngine::UIElements {
class VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeAssetUtilities;
}
namespace UnityEngine::UIElements {
class VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::VisualTreeAssetUtilities*);
MARK_REF_T(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualTreeAssetUtilities*, "UnityEngine.UIElements", "VisualTreeAssetUtilities");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0*, "UnityEngine.UIElements", "VisualTreeAssetUtilities/<EnumerateEnclosingNamespaces>d__0");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAssetUtilities/<EnumerateEnclosingNamespaces>d__0
class CORDL_TYPE VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::StringW __2__current;

  /// @brief Field <>3__fullTypeName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__fullTypeName, put = __cordl_internal_set___3__fullTypeName)) ::StringW __3__fullTypeName;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <lastDot>5__2, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__lastDot_5__2, put = __cordl_internal_set__lastDot_5__2)) int32_t _lastDot_5__2;

  /// @brief Field <startIndex>5__1, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startIndex_5__1, put = __cordl_internal_set__startIndex_5__1)) int32_t _startIndex_5__1;

  /// @brief Field fullTypeName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_fullTypeName, put = __cordl_internal_set_fullTypeName)) ::StringW fullTypeName;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x7152bb4, size 0xdc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x7152cd8, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x7152c90, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x7152d70, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x7152c98, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x7152cd0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x7152bb0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::StringW const& __cordl_internal_get___3__fullTypeName() const;

  constexpr ::StringW& __cordl_internal_get___3__fullTypeName();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__lastDot_5__2() const;

  constexpr int32_t& __cordl_internal_get__lastDot_5__2();

  constexpr int32_t const& __cordl_internal_get__startIndex_5__1() const;

  constexpr int32_t& __cordl_internal_get__startIndex_5__1();

  constexpr ::StringW const& __cordl_internal_get_fullTypeName() const;

  constexpr ::StringW& __cordl_internal_get_fullTypeName();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___3__fullTypeName(::StringW value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__lastDot_5__2(int32_t value);

  constexpr void __cordl_internal_set__startIndex_5__1(int32_t value);

  constexpr void __cordl_internal_set_fullTypeName(::StringW value);

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x7152b90, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0(VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0(VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5314 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field fullTypeName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___fullTypeName;

  /// @brief Field <>3__fullTypeName, offset: 0x30, size: 0x8, def value: None
  ::StringW _____3__fullTypeName;

  /// @brief Field <startIndex>5__1, offset: 0x38, size: 0x4, def value: None
  int32_t ____startIndex_5__1;

  /// @brief Field <lastDot>5__2, offset: 0x3c, size: 0x4, def value: None
  int32_t ____lastDot_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0, ___fullTypeName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0, _____3__fullTypeName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0, ____startIndex_5__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0, ____lastDot_5__2) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0) == 0x40, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [Extension]
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAssetUtilities
class CORDL_TYPE VisualTreeAssetUtilities : public ::System::Object {
public:
  // Declarations
  using _EnumerateEnclosingNamespaces_d__0 = ::UnityEngine::UIElements::VisualTreeAssetUtilities__EnumerateEnclosingNamespaces_d__0;

  /// [IteratorStateMachine(typeof(UnityEngine.UIElements.VisualTreeAssetUtilities::<EnumerateEnclosingNamespaces>d__0))]
  /// @brief Method EnumerateEnclosingNamespaces, addr 0x7152b20, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateEnclosingNamespaces(::StringW fullTypeName);

  /// [Extension]
  /// @brief Method FindUxmlNamespaceDefinitionForTypeName, addr 0x7150430, size 0x5e0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UxmlNamespaceDefinition FindUxmlNamespaceDefinitionForTypeName(::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::UxmlAsset* asset,
                                                                                                          ::StringW fullTypeName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAssetUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAssetUtilities", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAssetUtilities(VisualTreeAssetUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAssetUtilities", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAssetUtilities(VisualTreeAssetUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5315 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::VisualTreeAssetUtilities) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
