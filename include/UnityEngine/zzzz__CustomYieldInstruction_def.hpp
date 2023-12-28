#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomYieldInstruction)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class CustomYieldInstruction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CustomYieldInstruction);
// Type: UnityEngine::CustomYieldInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10242))
// CS Name: ::UnityEngine::CustomYieldInstruction*
class CORDL_TYPE CustomYieldInstruction : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method get_keepWaiting addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_keepWaiting();

  /// @brief Method get_Current addr 0x2cd4ed4 size 0x8 virtual true final true
  inline ::System::Object* get_Current();

  /// @brief Method MoveNext addr 0x2cd4edc size 0xc virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x2cd4ee8 size 0x4 virtual true final false
  inline void Reset();

  static inline ::UnityEngine::CustomYieldInstruction* New_ctor();

  /// @brief Method .ctor addr 0x2ccefd0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CustomYieldInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomYieldInstruction(CustomYieldInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomYieldInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomYieldInstruction(CustomYieldInstruction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomYieldInstruction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CustomYieldInstruction, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CustomYieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CustomYieldInstruction*, "UnityEngine", "CustomYieldInstruction");
