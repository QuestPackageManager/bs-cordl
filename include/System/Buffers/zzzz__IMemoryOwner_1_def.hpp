#pragma once
// IWYU pragma private; include "System\Buffers\IMemoryOwner_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMemoryOwner_1)
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Memory_1;
}
// Forward declare root types
namespace System::Buffers {
template <typename T> class IMemoryOwner_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Buffers::IMemoryOwner_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Buffers::IMemoryOwner_1, "System.Buffers", "IMemoryOwner`1");
// Dependencies
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Buffers.IMemoryOwner`1<T>
class CORDL_TYPE IMemoryOwner_1 {
public:
  // Declarations
  __declspec(property(get = get_Memory)) ::System::Memory_1<T> Memory;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method get_Memory, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Memory_1<T> get_Memory();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IMemoryOwner_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMemoryOwner_1(IMemoryOwner_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3823 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
