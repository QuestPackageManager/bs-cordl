#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Warning)
namespace RootMotion {
class __Warning__Logger;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
class Warning;
}
namespace RootMotion {
class __Warning__Logger;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::Warning);
MARK_REF_PTR_T(::RootMotion::__Warning__Logger);
// Type: ::Logger
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12502))
// CS Name: ::Warning::Logger*
class CORDL_TYPE __Warning__Logger : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::RootMotion::__Warning__Logger* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x12409a0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x1240a74, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW message);

  /// @brief Method BeginInvoke, addr 0x1240a88, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW message, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1240aa8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__Warning__Logger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Warning__Logger(__Warning__Logger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Warning__Logger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Warning__Logger(__Warning__Logger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Warning__Logger();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::__Warning__Logger, 0x80>, "Size mismatch!");

} // namespace RootMotion
// Type: RootMotion::Warning
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12503))
// CS Name: ::RootMotion::Warning*
class CORDL_TYPE Warning : public ::System::Object {
public:
  // Declarations
  using Logger = ::RootMotion::__Warning__Logger;

  /// @brief Field logged, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_logged, put = setStaticF_logged)) bool logged;

  static inline void setStaticF_logged(bool value);

  static inline bool getStaticF_logged();

  /// @brief Method Log, addr 0x1240908, size 0x98, virtual false, abstract: false, final false
  static inline void Log(::StringW message, ::RootMotion::__Warning__Logger* logger, bool logInEditMode);

  /// @brief Method Log, addr 0x123aba8, size 0xb4, virtual false, abstract: false, final false
  static inline void Log(::StringW message, ::UnityEngine::Transform* context, bool logInEditMode);

  // Ctor Parameters [CppParam { name: "", ty: "Warning", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Warning(Warning&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Warning", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Warning(Warning const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Warning();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Warning, 0x10>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::Warning);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Warning*, "RootMotion", "Warning");
NEED_NO_BOX(::RootMotion::__Warning__Logger);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::__Warning__Logger*, "RootMotion", "Warning/Logger");
