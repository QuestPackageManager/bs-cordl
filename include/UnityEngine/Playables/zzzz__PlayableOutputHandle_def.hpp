#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableOutputHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableOutputHandle)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class INotificationReceiver;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableOutputHandle);
// Dependencies System.IEquatable`1<T>, System.IntPtr
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableOutputHandle
struct CORDL_TYPE PlayableOutputHandle {
public:
  // Declarations
  /// @brief Field m_Null, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_m_Null, put = setStaticF_m_Null)) ::UnityEngine::Playables::PlayableOutputHandle m_Null;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>*();

  /// @brief Method AddNotificationReceiver, addr 0x48cf204, size 0x84, virtual false, abstract: false, final false
  inline void AddNotificationReceiver(::UnityEngine::Playables::INotificationReceiver* receiver);

  /// @brief Method AddNotificationReceiver_Injected, addr 0x48cf288, size 0x44, virtual false, abstract: false, final false
  static inline void AddNotificationReceiver_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::UnityEngine::Playables::INotificationReceiver* receiver);

  /// @brief Method CompareVersion, addr 0x48ce980, size 0x34, virtual false, abstract: false, final false
  static inline bool CompareVersion(::UnityEngine::Playables::PlayableOutputHandle lhs, ::UnityEngine::Playables::PlayableOutputHandle rhs);

  /// @brief Method Equals, addr 0x48cea5c, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Playables::PlayableOutputHandle other);

  /// @brief Method Equals, addr 0x48ce9b4, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* p);

  /// @brief Method GetHashCode, addr 0x48ce94c, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetPlayableOutputType, addr 0x48ceb8c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Type* GetPlayableOutputType();

  /// @brief Method GetPlayableOutputType_Injected, addr 0x48cec00, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Type* GetPlayableOutputType_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self);

  /// @brief Method GetSourceOutputPort, addr 0x48cef88, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetSourceOutputPort();

  /// @brief Method GetSourceOutputPort_Injected, addr 0x48ceffc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetSourceOutputPort_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self);

  /// @brief Method GetSourcePlayable, addr 0x48cedcc, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle GetSourcePlayable();

  /// @brief Method GetSourcePlayable_Injected, addr 0x48cee58, size 0x44, virtual false, abstract: false, final false
  static inline void GetSourcePlayable_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::ByRef<::UnityEngine::Playables::PlayableHandle> ret);

  /// @brief Method IsPlayableOutputOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsPlayableOutputOfType();

  /// @brief Method IsValid, addr 0x48ceadc, size 0x74, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValid_Injected, addr 0x48ceb50, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsValid_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self);

  /// @brief Method PushNotification, addr 0x48cf108, size 0xa0, virtual false, abstract: false, final false
  inline void PushNotification(::UnityEngine::Playables::PlayableHandle origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  /// @brief Method PushNotification_Injected, addr 0x48cf1a8, size 0x5c, virtual false, abstract: false, final false
  static inline void PushNotification_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::ByRef<::UnityEngine::Playables::PlayableHandle> origin,
                                               ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  /// @brief Method SetReferenceObject, addr 0x48cec3c, size 0x84, virtual false, abstract: false, final false
  inline void SetReferenceObject(::UnityEngine::Object* target);

  /// @brief Method SetReferenceObject_Injected, addr 0x48cecc0, size 0x44, virtual false, abstract: false, final false
  static inline void SetReferenceObject_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::UnityEngine::Object* target);

  /// @brief Method SetSourcePlayable, addr 0x48cee9c, size 0x98, virtual false, abstract: false, final false
  inline void SetSourcePlayable(::UnityEngine::Playables::PlayableHandle target, int32_t port);

  /// @brief Method SetSourcePlayable_Injected, addr 0x48cef34, size 0x54, virtual false, abstract: false, final false
  static inline void SetSourcePlayable_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::ByRef<::UnityEngine::Playables::PlayableHandle> target, int32_t port);

  /// @brief Method SetUserData, addr 0x48ced04, size 0x84, virtual false, abstract: false, final false
  inline void SetUserData(::UnityEngine::Object* target);

  /// @brief Method SetUserData_Injected, addr 0x48ced88, size 0x44, virtual false, abstract: false, final false
  static inline void SetUserData_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::UnityEngine::Object* target);

  /// @brief Method SetWeight, addr 0x48cf038, size 0x84, virtual false, abstract: false, final false
  inline void SetWeight(float_t weight);

  /// @brief Method SetWeight_Injected, addr 0x48cf0bc, size 0x4c, virtual false, abstract: false, final false
  static inline void SetWeight_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, float_t weight);

  static inline ::UnityEngine::Playables::PlayableOutputHandle getStaticF_m_Null();

  /// @brief Method get_Null, addr 0x48ce8f4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutputHandle get_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>* i___System__IEquatable_1___UnityEngine__Playables__PlayableOutputHandle_();

  /// @brief Method op_Equality, addr 0x48ce7fc, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Playables::PlayableOutputHandle lhs, ::UnityEngine::Playables::PlayableOutputHandle rhs);

  static inline void setStaticF_m_Null(::UnityEngine::Playables::PlayableOutputHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableOutputHandle();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PlayableOutputHandle(::System::IntPtr m_Handle, uint32_t m_Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11289 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Handle;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  uint32_t m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableOutputHandle, m_Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableOutputHandle, m_Version) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableOutputHandle, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableOutputHandle, "UnityEngine.Playables", "PlayableOutputHandle");
