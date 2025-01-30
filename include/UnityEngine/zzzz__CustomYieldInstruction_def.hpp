#pragma once
// IWYU pragma private; include "UnityEngine/CustomYieldInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomYieldInstruction)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class CustomYieldInstruction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CustomYieldInstruction);
// Dependencies System.Collections.IEnumerator, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CustomYieldInstruction
class CORDL_TYPE CustomYieldInstruction : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x48ab130, size 0xc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::CustomYieldInstruction* New_ctor();

  /// @brief Method Reset, addr 0x48ab13c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method .ctor, addr 0x48ab140, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Current, addr 0x48ab128, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_keepWaiting, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomYieldInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomYieldInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomYieldInstruction(CustomYieldInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomYieldInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomYieldInstruction(CustomYieldInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10879 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CustomYieldInstruction, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CustomYieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CustomYieldInstruction*, "UnityEngine", "CustomYieldInstruction");
