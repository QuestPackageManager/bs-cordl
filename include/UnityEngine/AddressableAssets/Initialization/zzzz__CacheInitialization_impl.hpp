#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\Initialization\CacheInitialization.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/AddressableAssets/Initialization/zzzz__CacheInitialization_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/AddressableAssets/Initialization/zzzz__CacheInitialization_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IInitializableObject_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::*)(::System::Func_1<bool>*)>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646d218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x646d220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(),
                                                            { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::*)(float_t)>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::Update)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x646d2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(), { "Update", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::Execute)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x646d3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(),
                                                            { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x646d128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr void UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::__cordl_internal_set_m_Callback(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Callback = value;
}
constexpr bool& UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::__cordl_internal_get_m_UpdateRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRequired;
}
constexpr bool const& UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::__cordl_internal_get_m_UpdateRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRequired;
}
constexpr void UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::__cordl_internal_set_m_UpdateRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateRequired = value;
}
inline void UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::Init(::System::Func_1<bool>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline bool UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::Update(float_t unscaledDeltaTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(), { "Update", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
inline void UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::Execute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp* UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver*
UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::CacheInitialization_CacheInitOp::CacheInitialization_CacheInitOp() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646d124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0._InitializeAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::_InitializeAsync_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x646d458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0*>(), { "<InitializeAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::Initialization::CacheInitialization*&
UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::Initialization::CacheInitialization* const&
UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::Initialization::CacheInitialization* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::__cordl_internal_set_data(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::_InitializeAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0*>(), { "<InitializeAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0*
UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::CacheInitialization___c__DisplayClass1_0::CacheInitialization___c__DisplayClass1_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::Initialization::CacheInitialization::*)(::StringW, ::StringW)>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization::Initialize)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x646cd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::AddressableAssets::Initialization::CacheInitialization::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::StringW, ::StringW)>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization::InitializeAsync)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x646cfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization.get_RootPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Initialization::CacheInitialization::get_RootPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x646d17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>(), { "get_RootPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::CacheInitialization._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::CacheInitialization::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::CacheInitialization::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646d214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::AddressableAssets::Initialization::CacheInitialization::Initialize(::StringW id, ::StringW dataStr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, dataStr);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::Initialization::CacheInitialization::InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, rm, id, data);
}
inline ::StringW UnityEngine::AddressableAssets::Initialization::CacheInitialization::get_RootPath() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>(), { "get_RootPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::CacheInitialization::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::Initialization::CacheInitialization* UnityEngine::AddressableAssets::Initialization::CacheInitialization::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
constexpr UnityEngine::AddressableAssets::Initialization::CacheInitialization::operator ::UnityEngine::ResourceManagement::Util::IInitializableObject*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IInitializableObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
constexpr ::UnityEngine::ResourceManagement::Util::IInitializableObject*
UnityEngine::AddressableAssets::Initialization::CacheInitialization::i___UnityEngine__ResourceManagement__Util__IInitializableObject() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IInitializableObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitialization() {}
