#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsSessionInfo)
namespace UnityEngine::Analytics {
class __AnalyticsSessionInfo__IdentityTokenChanged;
}
namespace UnityEngine::Analytics {
struct AnalyticsSessionState;
}
namespace UnityEngine::Analytics {
class __AnalyticsSessionInfo__SessionStateChanged;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class AnalyticsSessionInfo;
}
namespace UnityEngine::Analytics {
class __AnalyticsSessionInfo__IdentityTokenChanged;
}
namespace UnityEngine::Analytics {
class __AnalyticsSessionInfo__SessionStateChanged;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::AnalyticsSessionInfo);
MARK_REF_PTR_T(::UnityEngine::Analytics::__AnalyticsSessionInfo__IdentityTokenChanged);
MARK_REF_PTR_T(::UnityEngine::Analytics::__AnalyticsSessionInfo__SessionStateChanged);
// Type: ::SessionStateChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15939))
// CS Name: ::AnalyticsSessionInfo::SessionStateChanged*
class CORDL_TYPE __AnalyticsSessionInfo__SessionStateChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Analytics::__AnalyticsSessionInfo__SessionStateChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2d429cc size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2d42a90 size 0x18 virtual true final false
  inline void Invoke(::UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged);

  // Ctor Parameters [CppParam { name: "", ty: "__AnalyticsSessionInfo__SessionStateChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AnalyticsSessionInfo__SessionStateChanged(__AnalyticsSessionInfo__SessionStateChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AnalyticsSessionInfo__SessionStateChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AnalyticsSessionInfo__SessionStateChanged(__AnalyticsSessionInfo__SessionStateChanged const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnalyticsSessionInfo__SessionStateChanged();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::__AnalyticsSessionInfo__SessionStateChanged, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Analytics
// Type: ::IdentityTokenChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15940))
// CS Name: ::AnalyticsSessionInfo::IdentityTokenChanged*
class CORDL_TYPE __AnalyticsSessionInfo__IdentityTokenChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Analytics::__AnalyticsSessionInfo__IdentityTokenChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2d42aa8 size 0xd4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2d42b7c size 0x14 virtual true final false
  inline void Invoke(::StringW token);

  // Ctor Parameters [CppParam { name: "", ty: "__AnalyticsSessionInfo__IdentityTokenChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AnalyticsSessionInfo__IdentityTokenChanged(__AnalyticsSessionInfo__IdentityTokenChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AnalyticsSessionInfo__IdentityTokenChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AnalyticsSessionInfo__IdentityTokenChanged(__AnalyticsSessionInfo__IdentityTokenChanged const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnalyticsSessionInfo__IdentityTokenChanged();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::__AnalyticsSessionInfo__IdentityTokenChanged, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Analytics
// Type: UnityEngine.Analytics::AnalyticsSessionInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15941))
// CS Name: ::UnityEngine.Analytics::AnalyticsSessionInfo*
class CORDL_TYPE AnalyticsSessionInfo : public ::System::Object {
public:
  // Declarations
  using IdentityTokenChanged = ::UnityEngine::Analytics::__AnalyticsSessionInfo__IdentityTokenChanged;

  using SessionStateChanged = ::UnityEngine::Analytics::__AnalyticsSessionInfo__SessionStateChanged;

  /// @brief Field sessionStateChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sessionStateChanged, put = setStaticF_sessionStateChanged))::UnityEngine::Analytics::__AnalyticsSessionInfo__SessionStateChanged* sessionStateChanged;

  /// @brief Field identityTokenChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_identityTokenChanged, put = setStaticF_identityTokenChanged))::UnityEngine::Analytics::__AnalyticsSessionInfo__IdentityTokenChanged* identityTokenChanged;

  static inline void setStaticF_sessionStateChanged(::UnityEngine::Analytics::__AnalyticsSessionInfo__SessionStateChanged* value);

  static inline ::UnityEngine::Analytics::__AnalyticsSessionInfo__SessionStateChanged* getStaticF_sessionStateChanged();

  static inline void setStaticF_identityTokenChanged(::UnityEngine::Analytics::__AnalyticsSessionInfo__IdentityTokenChanged* value);

  static inline ::UnityEngine::Analytics::__AnalyticsSessionInfo__IdentityTokenChanged* getStaticF_identityTokenChanged();

  /// @brief Method CallSessionStateChanged addr 0x2d428c4 size 0x9c virtual false final false
  static inline void CallSessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged);

  /// @brief Method CallIdentityTokenChanged addr 0x2d42960 size 0x6c virtual false final false
  static inline void CallIdentityTokenChanged(::StringW token);

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsSessionInfo(AnalyticsSessionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsSessionInfo(AnalyticsSessionInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsSessionInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::AnalyticsSessionInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::AnalyticsSessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsSessionInfo*, "UnityEngine.Analytics", "AnalyticsSessionInfo");
NEED_NO_BOX(::UnityEngine::Analytics::__AnalyticsSessionInfo__IdentityTokenChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::__AnalyticsSessionInfo__IdentityTokenChanged*, "UnityEngine.Analytics", "AnalyticsSessionInfo/IdentityTokenChanged");
NEED_NO_BOX(::UnityEngine::Analytics::__AnalyticsSessionInfo__SessionStateChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::__AnalyticsSessionInfo__SessionStateChanged*, "UnityEngine.Analytics", "AnalyticsSessionInfo/SessionStateChanged");
