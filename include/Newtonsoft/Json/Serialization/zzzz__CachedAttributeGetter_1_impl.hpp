#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/CachedAttributeGetter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__CachedAttributeGetter_1_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::setStaticF_TypeAttributeCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*,T>*  value)  {
::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*,T>*, "TypeAttributeCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>*>::get>(std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*,T>*>(value));
}
template<typename T>
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*,T>* Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::getStaticF_TypeAttributeCache()  {
return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*,T>*, "TypeAttributeCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>*>::get>();
}
template<typename T>
inline T Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::GetAttribute(::System::Object*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>*>::get(),
                        "GetAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
template<typename T>
constexpr ::Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::CachedAttributeGetter_1()   {
}
