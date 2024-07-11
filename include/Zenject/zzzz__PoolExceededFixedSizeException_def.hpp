#pragma once
// IWYU pragma private; include "Zenject/PoolExceededFixedSizeException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PoolExceededFixedSizeException)
// Forward declare root types
namespace Zenject {
class PoolExceededFixedSizeException;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PoolExceededFixedSizeException);
// Type: Zenject::PoolExceededFixedSizeException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::PoolExceededFixedSizeException*
class CORDL_TYPE PoolExceededFixedSizeException : public ::System::Exception {
public:
  // Declarations
  static inline ::Zenject::PoolExceededFixedSizeException* New_ctor(::StringW errorMessage);

  /// @brief Method .ctor, addr 0x367f710, size 0x68, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PoolExceededFixedSizeException, 0x90>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PoolExceededFixedSizeException);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolExceededFixedSizeException*, "Zenject", "PoolExceededFixedSizeException");
