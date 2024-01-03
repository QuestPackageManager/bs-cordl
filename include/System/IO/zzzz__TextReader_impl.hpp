#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/IO/zzzz__TextReader_NullTextReader_def.hpp"
#include "System/IO/zzzz__TextReader_SyncTextReader_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IO::__TextReader____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__TextReader____c::*)()>(&::System::IO::__TextReader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250728c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__TextReader____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__TextReader____c._ReadLineAsync_b__13_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::__TextReader____c::*)(::System::Object*)>(
    &::System::IO::__TextReader____c::_ReadLineAsync_b__13_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2507294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__TextReader____c*>::get(), "<ReadLineAsync>b__13_0", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::IO::__TextReader____c::setStaticF___9(::System::IO::__TextReader____c* value) {
  ::cordl_internals::setStaticField<::System::IO::__TextReader____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__TextReader____c*>::get>(
      std::forward<::System::IO::__TextReader____c*>(value));
}
inline ::System::IO::__TextReader____c* System::IO::__TextReader____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::IO::__TextReader____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__TextReader____c*>::get>();
}
inline void System::IO::__TextReader____c::setStaticF___9__13_0(::System::Func_2<::System::Object*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, ::StringW>*, "<>9__13_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__TextReader____c*>::get>(
      std::forward<::System::Func_2<::System::Object*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Object*, ::StringW>* System::IO::__TextReader____c::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, ::StringW>*, "<>9__13_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__TextReader____c*>::get>();
}
inline ::System::IO::__TextReader____c* System::IO::__TextReader____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::__TextReader____c*>());
}
inline void System::IO::__TextReader____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__TextReader____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::IO::__TextReader____c::_ReadLineAsync_b__13_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__TextReader____c*>::get(), "<ReadLineAsync>b__13_0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::System::IO::__TextReader____c::__TextReader____c() {}
//  Writing Method size for method: ::System::IO::TextReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::TextReader::*)()>(&::System::IO::TextReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2500d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::TextReader::*)()>(&::System::IO::TextReader::Close)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x250698c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::TextReader::*)()>(&::System::IO::TextReader::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25069f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::TextReader::*)(bool)>(&::System::IO::TextReader::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2506a64;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Peek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::TextReader::*)()>(&::System::IO::TextReader::Peek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2506a68;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::TextReader::*)()>(&::System::IO::TextReader::Read)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2506a70;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::TextReader::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::IO::TextReader::Read)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2506a78;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.ReadToEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::TextReader::*)()>(&::System::IO::TextReader::ReadToEnd)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2506c34;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.ReadLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::TextReader::*)()>(&::System::IO::TextReader::ReadLine)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2506d30;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.ReadLineAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::IO::TextReader::*)()>(
    &::System::IO::TextReader::ReadLineAsync)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x25028d4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Synchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextReader* (*)(::System::IO::TextReader*)>(&::System::IO::TextReader::Synchronized)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2506e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), "Synchronized", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::IO::TextReader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::IO::TextReader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline void System::IO::TextReader::setStaticF_Null(::System::IO::TextReader* value) {
  ::cordl_internals::setStaticField<::System::IO::TextReader*, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get>(
      std::forward<::System::IO::TextReader*>(value));
}
inline ::System::IO::TextReader* System::IO::TextReader::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::IO::TextReader*, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get>();
}
inline ::System::IO::TextReader* System::IO::TextReader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::TextReader*>());
}
inline void System::IO::TextReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::TextReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::TextReader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::TextReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline int32_t System::IO::TextReader::Peek() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::IO::TextReader::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::IO::TextReader::Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline ::StringW System::IO::TextReader::ReadToEnd() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::IO::TextReader::ReadLine() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::IO::TextReader::ReadLineAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::IO::TextReader* System::IO::TextReader::Synchronized(::System::IO::TextReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::TextReader*>::get(), "Synchronized", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::TextReader*, false>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::System::IO::TextReader::TextReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
