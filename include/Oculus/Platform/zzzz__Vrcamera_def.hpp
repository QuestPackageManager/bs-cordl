#pragma once
// IWYU pragma private; include "Oculus/Platform/Vrcamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Vrcamera)
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Vrcamera;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::Vrcamera*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Vrcamera*, "Oculus.Platform", "Vrcamera");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Vrcamera
class CORDL_TYPE Vrcamera : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetGetDataChannelMessageUpdateNotificationCallback, addr 0x5de91e8, size 0x7c, virtual false, abstract: false, final false
  static inline void SetGetDataChannelMessageUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

  /// @brief Method SetGetSurfaceUpdateNotificationCallback, addr 0x5de9264, size 0x7c, virtual false, abstract: false, final false
  static inline void SetGetSurfaceUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vrcamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vrcamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vrcamera(Vrcamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vrcamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vrcamera(Vrcamera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17938 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Vrcamera) == 0x10, "Size mismatch!");

} // namespace Oculus::Platform
