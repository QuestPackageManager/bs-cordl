#pragma once
// IWYU pragma private; include "Zenject\PoolExceededFixedSizeException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PoolExceededFixedSizeException)
// Forward declare root types
namespace Zenject {
class PoolExceededFixedSizeException;
}
// Write type traits
MARK_REF_T(::Zenject::PoolExceededFixedSizeException*);
DEFINE_IL2CPP_CLASS(::Zenject::PoolExceededFixedSizeException*, "Zenject", "PoolExceededFixedSizeException");
// Dependencies System.Exception
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PoolExceededFixedSizeException
class CORDL_TYPE PoolExceededFixedSizeException : public ::System::Exception {
public:
  // Declarations
  static inline ::Zenject::PoolExceededFixedSizeException* New_ctor(::StringW errorMessage);

  /// @brief Method .ctor, addr 0x6e6963c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW errorMessage);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolExceededFixedSizeException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolExceededFixedSizeException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolExceededFixedSizeException(PoolExceededFixedSizeException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolExceededFixedSizeException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolExceededFixedSizeException(PoolExceededFixedSizeException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::PoolExceededFixedSizeException) == 0x90, "Size mismatch!");

} // namespace Zenject
