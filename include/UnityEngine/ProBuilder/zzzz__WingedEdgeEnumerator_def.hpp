#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/WingedEdgeEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WingedEdgeEnumerator)
namespace System {
class Object;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class WingedEdgeEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::WingedEdgeEnumerator);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.WingedEdgeEnumerator
class CORDL_TYPE WingedEdgeEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::ProBuilder::WingedEdge* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field m_Current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Current, put = __cordl_internal_set_m_Current)) ::UnityEngine::ProBuilder::WingedEdge* m_Current;

  /// @brief Field m_Start, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Start, put = __cordl_internal_set_m_Start)) ::UnityEngine::ProBuilder::WingedEdge* m_Start;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x4747c34, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x4747be0, size 0x3c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::ProBuilder::WingedEdgeEnumerator* New_ctor(::UnityEngine::ProBuilder::WingedEdge* start);

  /// @brief Method Reset, addr 0x4747c1c, size 0x8, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4747c2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::UnityEngine::ProBuilder::WingedEdge* const& __cordl_internal_get_m_Current() const;

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __cordl_internal_get_m_Current();

  constexpr ::UnityEngine::ProBuilder::WingedEdge* const& __cordl_internal_get_m_Start() const;

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __cordl_internal_get_m_Start();

  constexpr void __cordl_internal_set_m_Current(::UnityEngine::ProBuilder::WingedEdge* value);

  constexpr void __cordl_internal_set_m_Start(::UnityEngine::ProBuilder::WingedEdge* value);

  /// @brief Method .ctor, addr 0x4747bb8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::WingedEdge* start);

  /// @brief Method get_Current, addr 0x4747c24, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::ProBuilder::WingedEdge* get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__ProBuilder__WingedEdge__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WingedEdgeEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WingedEdgeEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WingedEdgeEnumerator(WingedEdgeEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WingedEdgeEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WingedEdgeEnumerator(WingedEdgeEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14339 };

  /// @brief Field m_Start, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::WingedEdge* ___m_Start;

  /// @brief Field m_Current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::WingedEdge* ___m_Current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdgeEnumerator, ___m_Start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdgeEnumerator, ___m_Current) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::WingedEdgeEnumerator, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::WingedEdgeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WingedEdgeEnumerator*, "UnityEngine.ProBuilder", "WingedEdgeEnumerator");
