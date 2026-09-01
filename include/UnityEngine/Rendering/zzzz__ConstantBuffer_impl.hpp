#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ConstantBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ConstantBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ConstantBufferBase_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ConstantBuffer.ReleaseAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::ConstantBuffer::ReleaseAll)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6756108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { "ReleaseAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ConstantBuffer.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ConstantBufferBase*)>(&::UnityEngine::Rendering::ConstantBuffer::Register)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x67562a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::Rendering::ConstantBufferBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ConstantBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ConstantBuffer::*)()>(&::UnityEngine::Rendering::ConstantBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6756378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ConstantBuffer::setStaticF_m_RegisteredConstantBuffers(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ConstantBufferBase*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ConstantBufferBase*>*, "m_RegisteredConstantBuffers", ::UnityEngine::Rendering::ConstantBuffer*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ConstantBufferBase*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ConstantBufferBase*>* UnityEngine::Rendering::ConstantBuffer::getStaticF_m_RegisteredConstantBuffers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ConstantBufferBase*>*, "m_RegisteredConstantBuffers",
                                           ::UnityEngine::Rendering::ConstantBuffer*>();
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::PushGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<CBType> data, int32_t shaderId) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(),
          { "PushGlobal", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<CBType>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::PushGlobal(::by_ref<CBType> data, int32_t shaderId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(),
                                                           { "PushGlobal", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::by_ref<CBType>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, shaderId);
}
template <typename CBType>
inline void UnityEngine::Rendering::ConstantBuffer::Push(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<CBType> data, ::UnityEngine::ComputeShader* cs, int32_t shaderId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { "Push",
                                                                                                       { ::i2c::class_of<CBType>() },
                                                                                                       { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<CBType>>(),
                                                                                                         ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data, cs, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::Push(::by_ref<CBType> data, ::UnityEngine::ComputeShader* cs, int32_t shaderId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(),
                                       { "Push", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::by_ref<CBType>>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, cs, shaderId);
}
template <typename CBType>
inline void UnityEngine::Rendering::ConstantBuffer::Push(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<CBType> data, ::UnityEngine::Material* mat, int32_t shaderId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { "Push",
                                                                                                       { ::i2c::class_of<CBType>() },
                                                                                                       { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<CBType>>(),
                                                                                                         ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data, mat, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::Push(::by_ref<CBType> data, ::UnityEngine::Material* mat, int32_t shaderId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(),
                                       { "Push", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::by_ref<CBType>>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, mat, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::UpdateData(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<CBType> data) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(),
                                              { "UpdateData", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<CBType>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::UpdateData(::by_ref<CBType> data) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { "UpdateData", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::by_ref<CBType>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::SetGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t shaderId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(),
                                                           { "SetGlobal", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::SetGlobal(int32_t shaderId) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { "SetGlobal", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::Set(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, int32_t shaderId) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(),
          { "Set", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::Set(::UnityEngine::ComputeShader* cs, int32_t shaderId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(),
                                                           { "Set", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cs, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer::Set(::UnityEngine::Material* mat, int32_t shaderId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(),
                                                           { "Set", { ::i2c::class_of<CBType>() }, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<CBType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mat, shaderId);
}
inline void UnityEngine::Rendering::ConstantBuffer::ReleaseAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { "ReleaseAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ConstantBuffer::Register(::UnityEngine::Rendering::ConstantBufferBase* cb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::Rendering::ConstantBufferBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cb);
}
inline void UnityEngine::Rendering::ConstantBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ConstantBuffer* UnityEngine::Rendering::ConstantBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ConstantBuffer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ConstantBuffer::ConstantBuffer() {}
