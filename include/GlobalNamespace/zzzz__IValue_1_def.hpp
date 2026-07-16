#pragma once
// IWYU pragma private; include "GlobalNamespace/IValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IValue_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class IValue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::IValue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::IValue_1, "", "IValue`1");
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: IValue`1<T>
class CORDL_TYPE IValue_1 {
public:
  // Declarations
  __declspec(property(get = get_value, put = set_value)) T value;

  /// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_value();

  /// @brief Method set_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_value(T value);

  // Ctor Parameters [CppParam { name: "", ty: "IValue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValue_1(IValue_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20563 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
