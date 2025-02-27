#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Diagnostics/DiagnosticEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticEvent)
// Forward declare root types
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent);
// Dependencies
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
struct CORDL_TYPE DiagnosticEvent {
public:
  // Declarations
  __declspec(property(get = get_Dependencies)) ::ArrayW<int32_t, ::Array<int32_t>*> Dependencies;

  __declspec(property(get = get_DisplayName)) ::StringW DisplayName;

  __declspec(property(get = get_Frame)) int32_t Frame;

  __declspec(property(get = get_Graph)) ::StringW Graph;

  __declspec(property(get = get_ObjectId)) int32_t ObjectId;

  __declspec(property(get = get_Stream)) int32_t Stream;

  __declspec(property(get = get_Value)) int32_t Value;

  /// @brief Method Deserialize, addr 0x47b0410, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent Deserialize(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Serialize, addr 0x47b0378, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Serialize();

  /// @brief Method .ctor, addr 0x47b0360, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW graph, ::StringW name, int32_t id, int32_t stream, int32_t frame, int32_t value, ::ArrayW<int32_t, ::Array<int32_t>*> deps);

  /// @brief Method get_Dependencies, addr 0x47b0340, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Dependencies();

  /// @brief Method get_DisplayName, addr 0x47b0338, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_Frame, addr 0x47b0350, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Frame();

  /// @brief Method get_Graph, addr 0x47b0328, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Graph();

  /// @brief Method get_ObjectId, addr 0x47b0330, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectId();

  /// @brief Method get_Stream, addr 0x47b0348, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Stream();

  /// @brief Method get_Value, addr 0x47b0358, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticEvent();

  // Ctor Parameters [CppParam { name: "m_Graph", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Dependencies", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "m_ObjectId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "m_Stream", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Frame", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr DiagnosticEvent(::StringW m_Graph, ::ArrayW<int32_t, ::Array<int32_t>*> m_Dependencies, int32_t m_ObjectId, ::StringW m_DisplayName, int32_t m_Stream, int32_t m_Frame,
                            int32_t m_Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15693 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Graph, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Graph;

  /// @brief Field m_Dependencies, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> m_Dependencies;

  /// @brief Field m_ObjectId, offset: 0x10, size: 0x4, def value: None
  int32_t m_ObjectId;

  /// @brief Field m_DisplayName, offset: 0x18, size: 0x8, def value: None
  ::StringW m_DisplayName;

  /// @brief Field m_Stream, offset: 0x20, size: 0x4, def value: None
  int32_t m_Stream;

  /// @brief Field m_Frame, offset: 0x24, size: 0x4, def value: None
  int32_t m_Frame;

  /// @brief Field m_Value, offset: 0x28, size: 0x4, def value: None
  int32_t m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, m_Graph) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, m_Dependencies) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, m_ObjectId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, m_DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, m_Stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, m_Frame) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, m_Value) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent");
