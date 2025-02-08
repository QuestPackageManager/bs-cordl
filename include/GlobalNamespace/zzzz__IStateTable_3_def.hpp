#pragma once
// IWYU pragma private; include "GlobalNamespace/IStateTable_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IStateTable_3)
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class IStateTable_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IStateTable_3);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// CS Name: IStateTable`3<TStateTable,TType,TState>
class CORDL_TYPE IStateTable_3 {
public:
  // Declarations
  /// @brief Method ApplyDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TStateTable ApplyDelta(::ByRef<TStateTable> delta);

  /// @brief Method GetDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TStateTable GetDelta(::ByRef<TStateTable> stateTable);

  /// @brief Method GetSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetSize();

  /// @brief Method GetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TState GetState(TType type);

  /// @brief Method SetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetState(TType type, TState state);

  // Ctor Parameters [CppParam { name: "", ty: "IStateTable_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStateTable_3(IStateTable_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14991 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IStateTable_3, "", "IStateTable`3");
