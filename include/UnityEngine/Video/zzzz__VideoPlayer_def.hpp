#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoPlayer)
namespace UnityEngine::Video {
class __VideoPlayer__EventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__ErrorEventHandler;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::Video {
class __VideoPlayer__TimeEventHandler;
}
namespace UnityEngine::Video {
class VideoClip;
}
namespace UnityEngine::Video {
struct VideoTimeReference;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine::Video {
class __VideoPlayer__ErrorEventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__EventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__TimeEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer);
MARK_REF_PTR_T(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::__VideoPlayer__EventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::__VideoPlayer__TimeEventHandler);
// Type: ::EventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16083))
// CS Name: ::VideoPlayer::EventHandler*
class CORDL_TYPE __VideoPlayer__EventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Video::__VideoPlayer__EventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2eb18b4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2eb1988, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source);

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__EventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__EventHandler(__VideoPlayer__EventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__EventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__EventHandler(__VideoPlayer__EventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__EventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__EventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: ::ErrorEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16084))
// CS Name: ::VideoPlayer::ErrorEventHandler*
class CORDL_TYPE __VideoPlayer__ErrorEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2eb199c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2eb1a74, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, ::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__ErrorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__ErrorEventHandler(__VideoPlayer__ErrorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__ErrorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__ErrorEventHandler(__VideoPlayer__ErrorEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__ErrorEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: ::FrameReadyEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16085))
// CS Name: ::VideoPlayer::FrameReadyEventHandler*
class CORDL_TYPE __VideoPlayer__FrameReadyEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2eb1a88, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2eb1b60, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__FrameReadyEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__FrameReadyEventHandler(__VideoPlayer__FrameReadyEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__FrameReadyEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__FrameReadyEventHandler(__VideoPlayer__FrameReadyEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__FrameReadyEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: ::TimeEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16086))
// CS Name: ::VideoPlayer::TimeEventHandler*
class CORDL_TYPE __VideoPlayer__TimeEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Video::__VideoPlayer__TimeEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2eb1b74, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2eb1c4c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__TimeEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__TimeEventHandler(__VideoPlayer__TimeEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__TimeEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__TimeEventHandler(__VideoPlayer__TimeEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__TimeEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__TimeEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: UnityEngine.Video::VideoPlayer
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16087))
// CS Name: ::UnityEngine.Video::VideoPlayer*
class CORDL_TYPE VideoPlayer : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using TimeEventHandler = ::UnityEngine::Video::__VideoPlayer__TimeEventHandler;

  using FrameReadyEventHandler = ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler;

  using ErrorEventHandler = ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler;

  using EventHandler = ::UnityEngine::Video::__VideoPlayer__EventHandler;

  /// @brief Field prepareCompleted, offset 0x18, size 0x8
  __declspec(property(get = __get_prepareCompleted, put = __set_prepareCompleted))::UnityEngine::Video::__VideoPlayer__EventHandler* prepareCompleted;

  /// @brief Field loopPointReached, offset 0x20, size 0x8
  __declspec(property(get = __get_loopPointReached, put = __set_loopPointReached))::UnityEngine::Video::__VideoPlayer__EventHandler* loopPointReached;

  /// @brief Field started, offset 0x28, size 0x8
  __declspec(property(get = __get_started, put = __set_started))::UnityEngine::Video::__VideoPlayer__EventHandler* started;

  /// @brief Field frameDropped, offset 0x30, size 0x8
  __declspec(property(get = __get_frameDropped, put = __set_frameDropped))::UnityEngine::Video::__VideoPlayer__EventHandler* frameDropped;

  /// @brief Field errorReceived, offset 0x38, size 0x8
  __declspec(property(get = __get_errorReceived, put = __set_errorReceived))::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* errorReceived;

  /// @brief Field seekCompleted, offset 0x40, size 0x8
  __declspec(property(get = __get_seekCompleted, put = __set_seekCompleted))::UnityEngine::Video::__VideoPlayer__EventHandler* seekCompleted;

  /// @brief Field clockResyncOccurred, offset 0x48, size 0x8
  __declspec(property(get = __get_clockResyncOccurred, put = __set_clockResyncOccurred))::UnityEngine::Video::__VideoPlayer__TimeEventHandler* clockResyncOccurred;

  /// @brief Field frameReady, offset 0x50, size 0x8
  __declspec(property(get = __get_frameReady, put = __set_frameReady))::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* frameReady;

  __declspec(property(get = get_clip, put = set_clip))::UnityEngine::Video::VideoClip* clip;

  __declspec(property(get = get_texture))::UnityEngine::Texture* texture;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(put = set_frame)) int64_t frame;

  __declspec(property(put = set_playbackSpeed)) float_t playbackSpeed;

  __declspec(property(put = set_timeReference))::UnityEngine::Video::VideoTimeReference timeReference;

  __declspec(property(get = get_frameCount)) uint64_t frameCount;

  __declspec(property(get = get_frameRate)) float_t frameRate;

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __get_prepareCompleted();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __get_prepareCompleted() const;

  constexpr void __set_prepareCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __get_loopPointReached();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __get_loopPointReached() const;

  constexpr void __set_loopPointReached(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __get_started();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __get_started() const;

  constexpr void __set_started(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __get_frameDropped();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __get_frameDropped() const;

  constexpr void __set_frameDropped(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*& __get_errorReceived();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*> const& __get_errorReceived() const;

  constexpr void __set_errorReceived(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __get_seekCompleted();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __get_seekCompleted() const;

  constexpr void __set_seekCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__TimeEventHandler*& __get_clockResyncOccurred();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*> const& __get_clockResyncOccurred() const;

  constexpr void __set_clockResyncOccurred(::UnityEngine::Video::__VideoPlayer__TimeEventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*& __get_frameReady();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*> const& __get_frameReady() const;

  constexpr void __set_frameReady(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* value);

  /// @brief Method get_clip, addr 0x2eb1450, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoClip* get_clip();

  /// @brief Method set_clip, addr 0x2eb148c, size 0x44, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::Video::VideoClip* value);

  /// @brief Method get_texture, addr 0x2eb14d0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture* get_texture();

  /// @brief Method Play, addr 0x2eb150c, size 0x3c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Stop, addr 0x2eb1548, size 0x3c, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method get_isPlaying, addr 0x2eb1584, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method set_frame, addr 0x2eb15c0, size 0x44, virtual false, abstract: false, final false
  inline void set_frame(int64_t value);

  /// @brief Method set_playbackSpeed, addr 0x2eb1604, size 0x4c, virtual false, abstract: false, final false
  inline void set_playbackSpeed(float_t value);

  /// @brief Method set_timeReference, addr 0x2eb1650, size 0x44, virtual false, abstract: false, final false
  inline void set_timeReference(::UnityEngine::Video::VideoTimeReference value);

  /// @brief Method get_frameCount, addr 0x2eb1694, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_frameCount();

  /// @brief Method get_frameRate, addr 0x2eb16d0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_frameRate();

  /// @brief Method InvokePrepareCompletedCallback_Internal, addr 0x2eb170c, size 0x34, virtual false, abstract: false, final false
  static inline void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeFrameReadyCallback_Internal, addr 0x2eb1740, size 0x38, virtual false, abstract: false, final false
  static inline void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  /// @brief Method InvokeLoopPointReachedCallback_Internal, addr 0x2eb1778, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeStartedCallback_Internal, addr 0x2eb17ac, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeFrameDroppedCallback_Internal, addr 0x2eb17e0, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeErrorReceivedCallback_Internal, addr 0x2eb1814, size 0x38, virtual false, abstract: false, final false
  static inline void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::StringW errorStr);

  /// @brief Method InvokeSeekCompletedCallback_Internal, addr 0x2eb184c, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeClockResyncOccurredCallback_Internal, addr 0x2eb1880, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoPlayer(VideoPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoPlayer(VideoPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoPlayer();

public:
  /// @brief Field prepareCompleted, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___prepareCompleted;

  /// @brief Field loopPointReached, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___loopPointReached;

  /// @brief Field started, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___started;

  /// @brief Field frameDropped, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___frameDropped;

  /// @brief Field errorReceived, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* ___errorReceived;

  /// @brief Field seekCompleted, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___seekCompleted;

  /// @brief Field clockResyncOccurred, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__TimeEventHandler* ___clockResyncOccurred;

  /// @brief Field frameReady, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* ___frameReady;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___prepareCompleted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___loopPointReached) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___started) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameDropped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___errorReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___seekCompleted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___clockResyncOccurred) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameReady) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Video
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer*, "UnityEngine.Video", "VideoPlayer");
NEED_NO_BOX(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*, "UnityEngine.Video", "VideoPlayer/ErrorEventHandler");
NEED_NO_BOX(::UnityEngine::Video::__VideoPlayer__EventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::__VideoPlayer__EventHandler*, "UnityEngine.Video", "VideoPlayer/EventHandler");
NEED_NO_BOX(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*, "UnityEngine.Video", "VideoPlayer/FrameReadyEventHandler");
NEED_NO_BOX(::UnityEngine::Video::__VideoPlayer__TimeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::__VideoPlayer__TimeEventHandler*, "UnityEngine.Video", "VideoPlayer/TimeEventHandler");
