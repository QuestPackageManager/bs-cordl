#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WingedEdgeEnumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class WingedEdgeEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::WingedEdgeEnumerator);
// Type: UnityEngine.ProBuilder::WingedEdgeEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12223))
// CS Name: ::UnityEngine.ProBuilder::WingedEdgeEnumerator*
class CORDL_TYPE WingedEdgeEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Start, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Start, put = __set_m_Start))::UnityEngine::ProBuilder::WingedEdge* m_Start;

  /// @brief Field m_Current, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Current, put = __set_m_Current))::UnityEngine::ProBuilder::WingedEdge* m_Current;

  __declspec(property(get = get_Current))::UnityEngine::ProBuilder::WingedEdge* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __get_m_Start();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> const& __get_m_Start() const;

  constexpr void __set_m_Start(::UnityEngine::ProBuilder::WingedEdge* value);

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __get_m_Current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> const& __get_m_Current() const;

  constexpr void __set_m_Current(::UnityEngine::ProBuilder::WingedEdge* value);

  static inline ::UnityEngine::ProBuilder::WingedEdgeEnumerator* New_ctor(::UnityEngine::ProBuilder::WingedEdge* start);

  /// @brief Method .ctor, addr 0x2b86ce4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::WingedEdge* start);

  /// @brief Method MoveNext, addr 0x2b86d0c, size 0x3c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x2b86d48, size 0x8, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Current, addr 0x2b86d50, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::ProBuilder::WingedEdge* get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2b86d58, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method Dispose, addr 0x2b86d60, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "WingedEdgeEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WingedEdgeEnumerator(WingedEdgeEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WingedEdgeEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WingedEdgeEnumerator(WingedEdgeEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WingedEdgeEnumerator();

public:
  /// @brief Field m_Start, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::WingedEdge* ___m_Start;

  /// @brief Field m_Current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::WingedEdge* ___m_Current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::WingedEdgeEnumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdgeEnumerator, ___m_Start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdgeEnumerator, ___m_Current) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::WingedEdgeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WingedEdgeEnumerator*, "UnityEngine.ProBuilder", "WingedEdgeEnumerator");
