#pragma once
// IWYU pragma private; include "Zenject\ZenjectException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ZenjectException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Zenject {
class ZenjectException;
}
// Write type traits
MARK_REF_T(::Zenject::ZenjectException*);
DEFINE_IL2CPP_CLASS(::Zenject::ZenjectException*, "Zenject", "ZenjectException");
// Dependencies System.Exception
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenjectException
class CORDL_TYPE ZenjectException : public ::System::Exception {
public:
  // Declarations
  static inline ::Zenject::ZenjectException* New_ctor(::StringW message);

  static inline ::Zenject::ZenjectException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x6e9e9fc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x6e9ea68, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectException(ZenjectException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectException(ZenjectException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14715 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::ZenjectException) == 0x90, "Size mismatch!");

} // namespace Zenject
