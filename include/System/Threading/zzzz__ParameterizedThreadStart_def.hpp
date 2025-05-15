#pragma once
// IWYU pragma private; include "System/Threading/ParameterizedThreadStart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ParameterizedThreadStart)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class ParameterizedThreadStart;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ParameterizedThreadStart);
// Dependencies System.MulticastDelegate
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ParameterizedThreadStart
class CORDL_TYPE ParameterizedThreadStart : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3e4d594, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* obj);

  static inline ::System::Threading::ParameterizedThreadStart* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3e4d494, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterizedThreadStart();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedThreadStart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterizedThreadStart(ParameterizedThreadStart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedThreadStart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterizedThreadStart(ParameterizedThreadStart const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2669 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ParameterizedThreadStart, 0x80>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ParameterizedThreadStart);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ParameterizedThreadStart*, "System.Threading", "ParameterizedThreadStart");
