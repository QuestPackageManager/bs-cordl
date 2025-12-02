#pragma once
// IWYU pragma private; include "System/Buffers/MemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryPool_1)
namespace System::Buffers {
template <typename T> class IMemoryOwner_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Buffers {
template <typename T> class MemoryPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::MemoryPool_1);
// Dependencies System.Object
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Buffers.MemoryPool`1<T>
class CORDL_TYPE MemoryPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_shared, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_shared, put = setStaticF_s_shared)) ::System::Buffers::MemoryPool_1<T>* s_shared;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::Buffers::MemoryPool_1<T>* New_ctor();

  /// @brief Method Rent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Buffers::IMemoryOwner_1<T>* Rent(int32_t minBufferSize);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Buffers::MemoryPool_1<T>* getStaticF_s_shared();

  /// @brief Method get_Shared, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Buffers::MemoryPool_1<T>* get_Shared();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_shared(::System::Buffers::MemoryPool_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPool_1(MemoryPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPool_1(MemoryPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3834 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::MemoryPool_1, "System.Buffers", "MemoryPool`1");
