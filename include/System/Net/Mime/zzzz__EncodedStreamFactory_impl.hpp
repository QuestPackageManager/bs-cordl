#pragma once
// IWYU pragma private; include "System/Net/Mime/EncodedStreamFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mime/zzzz__EncodedStreamFactory_def.hpp"
//  Writing Method size for method: ::System::Net::Mime::EncodedStreamFactory._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Mime::EncodedStreamFactory::*)()>(&::System::Net::Mime::EncodedStreamFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x622d898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mime::EncodedStreamFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Mime::EncodedStreamFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mime::EncodedStreamFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Mime::EncodedStreamFactory* System::Net::Mime::EncodedStreamFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Mime::EncodedStreamFactory*>());
}
// Ctor Parameters []
constexpr ::System::Net::Mime::EncodedStreamFactory::EncodedStreamFactory()   {
}
