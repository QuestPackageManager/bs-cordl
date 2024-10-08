#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/EnvoyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvoyInfo)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting {
class IEnvoyInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class EnvoyInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::EnvoyInfo);
// Type: System.Runtime.Remoting::EnvoyInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::EnvoyInfo*
class CORDL_TYPE EnvoyInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EnvoySinks)) ::System::Runtime::Remoting::Messaging::IMessageSink* EnvoySinks;

  /// @brief Field envoySinks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_envoySinks, put = __cordl_internal_set_envoySinks)) ::System::Runtime::Remoting::Messaging::IMessageSink* envoySinks;

  /// @brief Convert operator to "::System::Runtime::Remoting::IEnvoyInfo"
  constexpr operator ::System::Runtime::Remoting::IEnvoyInfo*() noexcept;

  static inline ::System::Runtime::Remoting::EnvoyInfo* New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* sinks);

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get_envoySinks();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __cordl_internal_get_envoySinks() const;

  constexpr void __cordl_internal_set_envoySinks(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  /// @brief Method .ctor, addr 0x3c5136c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* sinks);

  /// @brief Method get_EnvoySinks, addr 0x3c51394, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks();

  /// @brief Convert to "::System::Runtime::Remoting::IEnvoyInfo"
  constexpr ::System::Runtime::Remoting::IEnvoyInfo* i___System__Runtime__Remoting__IEnvoyInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvoyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvoyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvoyInfo(EnvoyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvoyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvoyInfo(EnvoyInfo const&) = delete;

  /// @brief Field envoySinks, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ___envoySinks;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3055 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::EnvoyInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::EnvoyInfo, ___envoySinks) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::EnvoyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::EnvoyInfo*, "System.Runtime.Remoting", "EnvoyInfo");
