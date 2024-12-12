#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/Logger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Yoga {
class YogaConfig;
}
namespace UnityEngine::Yoga {
struct YogaLogLevel;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class Logger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::Logger);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: UnityEngine.Yoga.Logger
class CORDL_TYPE Logger : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x496978c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Yoga::YogaConfig* config, ::UnityEngine::Yoga::YogaNode* node, ::UnityEngine::Yoga::YogaLogLevel level, ::StringW message);

  static inline ::UnityEngine::Yoga::Logger* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4969688, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Logger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Logger(Logger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Logger(Logger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5422 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::Logger, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::Logger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Logger*, "UnityEngine.Yoga", "Logger");
